#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(ll s, ll t){
    deque<pair<ll,ll>> q;
    vector<bool> visited(2*t+1, false);
    visited[s] = true;
    q.push_back({s,0});
    while(!q.empty()){
        pair<ll,ll> top = q.front();
        q.pop_front();
        if(top.first==t) return top.second;
        if(top.first*2 == t || top.first-1 == t) return top.second+1;
        if(top.first < t && !visited[top.first*2]){
            q.push_front({top.first*2,top.second+1});
            visited[top.first*2] = true;
        }
        if(top.first>1 && !visited[top.first-1]){
            q.push_back({top.first-1, top.second+1});
            visited[top.first-1] = true;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ll s,t; cin >> s >> t;
        cout << solve(s,t) << endl;
    }
    return 0;
}
