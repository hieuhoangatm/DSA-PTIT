#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000];

void ktao(){
	int n,m; cin >> n>>m;
	for(int i=0;i<1000;i++){
		v[i].clear();
	}
	for(int i=1;i<=m;i++ ){
		int x,y; cin >> x >> y;
		v[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		cout << i <<": ";
		for(int x:v[i]) cout << x << " ";
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){	
		ktao();
	}
}

