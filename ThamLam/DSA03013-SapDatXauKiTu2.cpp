#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int d; cin >> d;
        string s; cin >> s;
        map<char,int> mp;
        if(s.size()<=d){
            cout <<"-1\n" << endl;
            continue;
        }
        for(char x:s) mp[x]++;
        int sum=0,k=0;
        for(auto it:mp){
            sum+= it.second;
            k=max(k,it.second);
        }
        if(s.size() >= d*k-(k-1)) cout <<"1\n";
        else cout <<"-1\n";
    }
}