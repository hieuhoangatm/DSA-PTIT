#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v[1005];
bool visited[1005];

void Ktao(){
	for(int i=0;i<1005;i++){
		v[i].clear();
	}
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int x,y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void DFS(int u){
	visited[u]=true;
	for(int x: v[u]){
		if(!visited[x]) DFS(x);
	}
}

void dem(){
	int cnt=0;
	//memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i]){
				cnt++;
				DFS(i);
		}
	}
	cout << cnt << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		Ktao();
		dem();
	}
}
