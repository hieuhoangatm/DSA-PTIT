#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		set<int> se;
		for(int i=0;i<n;i++){
			cin >> a[i];
			while(a[i]>0){
				int x = a[i]%10;
				se.insert(x);
				a[i]/=10;
			}
		}
		for(auto it:se) cout<< it << " ";
		cout << endl;
	}
}
