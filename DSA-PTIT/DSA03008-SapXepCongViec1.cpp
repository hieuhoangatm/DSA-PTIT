#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> start;
        vector<int> finish;
        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            int x; cin >> x;
            start.push_back(x);
        }
        for(int i=0;i<n;i++){
            int y; cin >> y;
            finish.push_back(y);
        }
        for(int i=0;i<n;i++){
            v.push_back({start[i], finish[i]});
        }
        sort(v.begin(),v.end(),cmp);
        int dem=1,t=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>= t){
                dem++;
                t=v[i].second;
            }
        }
        cout << dem << endl;
        
    }
}