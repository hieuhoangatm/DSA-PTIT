#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
int m,n,u;
bool visited[1005];

void Input(){
	cin >> m >> n >>u;
	for(int i=0;i<1005;i++){
		v[i].clear();
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
		v[x].push_back(y);
	//	v[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void DFS(int u){
	cout << u << " ";
	visited[u]=true;
	for(int x:v[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		Input();
		DFS(u);
		cout << endl;
	}
}
