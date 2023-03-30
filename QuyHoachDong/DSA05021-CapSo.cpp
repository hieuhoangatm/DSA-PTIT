#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
int f[105];
vector<pair<int,int>> v;
int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        int n; cin >> n;
        for(int i=0;i<n;i++){
            int x,y; cin >> x >> y;
            v.push_back({x,y});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++) f[i]=1;
        int kq=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[i].first > v[j].second){
                    f[i]=max(f[i],f[j]+1);
                }
                kq=max(kq,f[i]);
            }
        }
        cout << kq << endl;
    }
}