#include<bits/stdc++.h>
using namespace std;

struct edge{
    int v,u,w;
};

int n,m;
int parent[1005];
int size[1005];
vector<edge> canh;

void ktao(){
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int x,y,z; cin >> x >>y >> z;
        edge e;
        e.v= x;
        e.u= y;
        e.w=z;
        canh.push_back(e);
    }
}

void make_set(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        size[i]=1;
    }
}

int find(int v){
    if(v==parent[v]){
        return v; // v chinh la dinh dai dien
    }
    return parent[v]= find(parent[v]);
}

bool Union(int a, int b){
    a= find(a);
    b= find(b);
    if(a==b) return false;
    if(size[a] < size[b]) swap(a,b);
    parent[b]=a;
    size[a]+=size[b];
    return true;
}

bool cmp( edge a, edge b){
    return a.w < b.w;
}

void Kruskal(){
    vector<edge> vv;
    long long d=0;
    sort(canh.begin(),canh.end(),cmp);
    for(int i=0;i<m;i++){
        if(vv.size()==n-1) break;
        edge e = canh[i];
        if(Union(e.u, e.v)){
            d+= e.w;
        }
    }
    cout << d << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        canh.clear();
        memset(parent,0,sizeof(parent));
        memset(size,0,sizeof(size));
        ktao();
        make_set();
        Kruskal();
    }
}
