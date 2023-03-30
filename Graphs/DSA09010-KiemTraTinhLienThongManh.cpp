#include<bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1000];
vector<int> v[1000];

void ktao(){
	for(int i=0;i<1000;i++) v[i].clear();
	cin >>n >> m;
	for(int i=1;i<=m;i++){
		int x,y; cin >> x >> y;
		v[x].push_back(y);
	}
	memset(visited,false,sizeof(visited));
}

int BFS(int u){
    queue<int> q;
    q.push(u);
    int dem=0;
    visited[u]=true;
    while(!q.empty()){
        int cnt = q.front();
        q.pop();
        dem++;
        for(int x: v[cnt]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
    return dem;
}

bool Strongly_connected(){
    for(int i=1;i<=n;i++){
        if(BFS(i)!=n){
            return false;
            break;
        }
        memset(visited,false,sizeof(visited));
    }
    return true;
}

int main(){
	int t; cin >> t;
	while(t--){
	    ktao();
	    if(Strongly_connected()) cout << "YES\n";
	    else cout <<"NO\n";
	}
}
