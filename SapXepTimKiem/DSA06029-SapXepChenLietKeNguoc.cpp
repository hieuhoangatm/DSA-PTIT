#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	vector<int> v;
	vector<int> adj[n];
	for(int i=0;i<n;i++){
		v.push_back(a[i]);
		sort(v.begin(),v.end());
		for(auto it:v){
			adj[i].push_back(it);
		}
	}
	for(int i=n-1;i>=0;i--){
		cout << "Buoc " << i << ": ";
		for(int j=0;j<adj[i].size();j++) cout << adj[i][j] << " ";
		cout << endl;
	}
}

