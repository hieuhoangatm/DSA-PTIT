#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<int,int>> v;
	int a[n][n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin >> a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1 && i<j){
				v.push_back({i,j});
			}
		}
	}
	for(auto it:v){
		cout << it.first << " "<<it.second<<endl;
	}
}
