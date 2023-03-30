#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		ll n1,n2,n3; cin >> n1 >> n2 >> n3;
		ll a[n1], b[n2],c[n3];
		set<ll> se;
		int ok=0;
		for(ll i=0;i<n1;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		for(ll i=0;i<n2;i++) cin >> b[i];
		for(ll i=0;i<n3;i++) cin >> c[i];
		for(auto it:se){
			if(binary_search(b,b+n2,it) && binary_search(c,c+n3,it) ){
				cout << it << " ";
				ok=1;
			}
		}
		if(!ok) cout <<"-1";
		cout << endl;
		
	}
}
