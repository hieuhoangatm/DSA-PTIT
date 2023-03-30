#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n],dp[n];
    for(int i=0;i<n;i++) cin >> a[i];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<n;i++){
        int ok=0;
        for(int j=0;j<=i-1;j++){
            if( a[j] < a[i] ){
                dp[i]= max(dp[j]+1, dp[i]);
                ok=1;
            }
        }
        if(!ok) dp[i]=1;
    }
    cout << *max_element(dp,dp+n);
}