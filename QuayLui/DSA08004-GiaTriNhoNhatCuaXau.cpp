#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        map<char,int> mp;
        for(char x:s) mp[x]++;
        priority_queue<int> q;
        for(auto it:mp){
            q.push(it.second);
        }
        while(k>0){
            int top= q.top();
            q.pop();
            top--;
            k--;
            q.push(max(0,top));
        }
        long long sum=0;
        while(!q.empty()){
            sum+= 1ll*q.top()*q.top();
            q.pop();
        }
        cout << sum << endl;
    }
}