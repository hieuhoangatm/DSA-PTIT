#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int k;string s; cin>>k >> s;
        priority_queue<int> pq;
        map<char,int> mp;
        for(char it:s){
            mp[it]++;
        }
        for(auto it:mp) pq.push(it.second);
        while(k>0){
            int top = pq.top();
            pq.pop();
            top--;
            k--;
            pq.push(max(0,top));
        }
        ll sum=0;
        while(!pq.empty()){
            sum+= ll(pq.top()*pq.top());
            pq.pop();
        }
        cout << sum << endl;
    }
}