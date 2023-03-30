#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int t; cin >> t;
    while(t--){
        //v.clear();
        int n; cin >> n;
        vector<int> start;
        vector<int> end;
        vector<pair<int,int>> v;
        for(int i=1;i<=n;i++){
            int x,y; cin >> x >> y;
            start.push_back(x);
            end.push_back(y);
            v.push_back({x,y});
        }
        sort(v.begin(),v.end(),cmp);
        int dem=1, check= v[0].second;
        for(int i=1;i<n;i++){
            if(check<= v[i].first){
                dem++;
                check= v[i].second;
            }
        }
        cout << dem << endl;
    }
}