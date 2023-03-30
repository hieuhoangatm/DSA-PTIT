#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n>>k;
		int a[n];
		set<int> se;
		for(int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		if(binary_search(a,a+n,k)){
			for(int i=0;i<n;i++){
				if(a[i]==k){
					cout << i+1;
					break;
				}
			}
		
		}else cout << "NO";
		cout << endl;
	}
}
