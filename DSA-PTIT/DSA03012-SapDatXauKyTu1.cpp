#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        map<char,int> mp;
        for(char x:s) mp[x]++;
        int sum=0;
        for(auto it:mp){
            sum=max(sum,it.second);
        }
        if(s.size()-sum>sum) cout <<"1\n";
        else cout <<"-1\n";
    }
}