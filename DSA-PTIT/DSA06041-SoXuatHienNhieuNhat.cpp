#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int x=0,y,ok=1;
		for(auto it:mp){
			if(it.second > n/2){
				x=max(x,it.second);
				y=it.first;
				ok=0;
			}
		}
		if(!ok) cout << y<< endl;
		else cout << "NO\n";
	}
}
