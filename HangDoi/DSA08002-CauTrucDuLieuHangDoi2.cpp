#include<bits/stdc++.h>
using namespace std;

int main(){
    int tv; cin >> tv;
    string s;
    queue<int> q;
    while(tv--){
        cin >> s;
        if(s=="PUSH"){
            int x; cin >> x;
            cin.ignore();
            q.push(x);
        }
        else if(s=="PRINTFRONT"){
            if(q.empty()) cout << "NONE\n";
            else cout << q.front() << endl;
        }
        else if(s=="POP"){
            if(!q.empty()) q.pop();
        }
    }
}