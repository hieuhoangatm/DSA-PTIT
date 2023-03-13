#include<bits/stdc++.h>
using namespace std;

vector<string> v;
using ll =long long;

ll n;

void ktao(){
    queue<string> q;
    v.push_back("1");
    q.push("1");
    while(1){
        string x= q.front();
        q.pop();
        if(stoll(x)>= pow(2,58)-1) break;
        v.push_back(x+"0");
        v.push_back(x+"1");
        q.push(x+"0");
        q.push(x+"1");
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ktao();
        vector<string> tmp;
        for(string x:v){
            if(stoll(x)>n) break;
            tmp.push_back(x);
        }
        cout << tmp.size() << endl;
    }
}