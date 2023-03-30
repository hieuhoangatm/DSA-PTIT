#include<bits/stdc++.h>
using namespace std;

int n,m,u;
vector<int> v[1005];
bool visited[1005];

void Ktao(){
	cin >> n >> m>>u;
	for(int i=0;i<1005;i++){
		v[i].clear();
	}
	for(int i=0;i<m;i++){
		int x,y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int tmp= q.front();
		cout << tmp << " ";
		q.pop();
		for(int x: v[tmp]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		Ktao();
		BFS(u);
		cout << endl;
	}
}
