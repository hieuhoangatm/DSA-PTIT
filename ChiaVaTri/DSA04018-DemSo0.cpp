#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		multiset<int> se;
		for(int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		//auto it=se.upper_bound(0);
		cout << se.count(0) << endl;
	}
}
