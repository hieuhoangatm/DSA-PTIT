#include<bits/stdc++.h>
using namespace std;
int dp[1005]={0};

int qhd(int a[], int n){
    dp[0]=1; 
    for(int i=1;i<n;i++){
        int ok=0;
        for(int j=0;j<i;j++){
            if(a[j]<= a[i]){
                dp[i]=  max(dp[i], dp[j]+1);
                ok=1;
            }
        }
        if(!ok) dp[i]=1;
    }
    return *max_element(dp,dp+n);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << n-qhd(a,n) << endl;
    }
}