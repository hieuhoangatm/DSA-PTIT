#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        vector<long long> dp(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];
        dp[1]=a[1];
        dp[2]=max(a[1],a[2]);
        if(n==1) cout << a[1] << endl;
        else if(n==2) cout << max(a[1],a[2]) << endl;
        else{
            for(int i=3;i<=n;i++){
                dp[i]=max(dp[i-1], dp[i-2]+a[i]);
            }
            cout << dp[n] << endl;
        }
    }
}