#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
int color[1001];

void ktao(){
    cin >> n >>m;
    for(int i=0;i<1001;i++) adj[i].clear();
    for(int i=0;i<m;i++){
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(color,0,sizeof(color));
}

bool dfs(int u){
    color[u]=1;
    for(int v:adj[u]){
        if(color[v]==0){
            if(dfs(v)) return true;
        }
        else if(color[v]==1) return true;
    }
    color[u]=2;
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        ktao();
        for(int i=1;i<=n;i++){
            if(color[i]==0){
                if(dfs(i)){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
        cout <<"NO\n";
        return 0;
    }
}