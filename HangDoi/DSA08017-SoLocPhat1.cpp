#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void ktao(){
    queue<string> q;
    v.push_back("6");
    v.push_back("8");
    q.push("6");
    q.push("8");
    while(1){
        string x= q.front();
        q.pop();
        if(x.length()==15) break;
        v.push_back(x + "6");
        v.push_back(x + "8");
        q.push(x+"6");
        q.push(x+"8");
    }
}
int main(){
    ktao();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> tmp;
        for(string k:v){
            if(k.length()==n+1) break;
            tmp.push_back(k);
        }
        reverse(tmp.begin(),tmp.end());
        for(string k:tmp) cout << k << " ";
        cout << endl;
    }
}