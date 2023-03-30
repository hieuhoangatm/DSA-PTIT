#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n;cin >> n;
    vector<int> a(n+1), f(n+1, 0);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int res = 0;
    for(int i = 1; i <= n; i++){
        f[a[i]] = f[a[i] - 1] + 1;
        //cout << f[a[i]] << " ";
        res = max(res, f[a[i]]);
    }
    cout << n - res;
}