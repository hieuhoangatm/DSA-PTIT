#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		ll n,m; cin >> n >> m;
		ll a[n],b[m];
		for(ll i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		for(ll i=0;i<m;i++) cin >> b[i];
		sort(b,b+n);
		ll x=a[n-1]*b[0];
		cout << x<< endl;
	}
}
