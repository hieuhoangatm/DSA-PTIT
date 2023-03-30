#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];
int n,m,s,t;
int parent[1005];

void ktao(){
	for(int i=0;i<1005;i++) v[i].clear();
	cin >> n >> m >> s >> t;
	for(int i=0;i<m;i++){
		int x,y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	memset(parent,0,sizeof(parent));
	
}

void DFS(int u){
	visited[u]=true;
	for(int x:v[u]){
		if(!visited[x]){
			parent[x]=u;
			DFS(x);
		}
	}
}

void DuongDi(int s, int t){
	DFS(s);
	if(!visited[t]){
		cout <<"-1";
	}else{
		vector<int> tmp;
		while(t!=s){
			tmp.push_back(t);
			t=parent[t];
		}
		tmp.push_back(s);
		reverse(tmp.begin(),tmp.end());
		for(int x:tmp) cout << x <<" ";
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		ktao();
		DuongDi(s,t);
		cout << endl;
	}	
}
