#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		ll n,x; cin >> n>>x;
		ll a[n];
		for(ll i=0;i<n;i++) cin >> a[i];
		ll m=0;
		for(int i=0;i<n;i++){
			if(a[i] <= x){
				m= max(a[i],m);
			}
		}
		int kq,ok=0;
		for(int i=0;i<n;i++){
			if(a[i]==m){
				kq=i+1;
				ok=1;
				break;
			}
		}
		if(ok) cout << kq << endl;
		else cout << "-1\n";
	}
}
