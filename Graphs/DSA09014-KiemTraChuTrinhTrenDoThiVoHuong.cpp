#include<bits/stdc++.h>
using namespace std;

int n,m;
int batdau, ketthuc;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void ktao(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

bool bfs(int u){
    visited[u]=true;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int v= q.front();
        q.pop();
        for(int x:adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
                parent[x]=v;
            }
            else if(x!=parent[v]) return true;
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int ok=1;
        ktao();
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                if( bfs(i) ){
                    cout << "YES\n";
                    ok=0;break;
                }
            }
        }
        if(!ok) cout <<"NO\n";
    }
}