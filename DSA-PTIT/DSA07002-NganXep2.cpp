#include<bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    stack<int> st;
    while(q--){
        string s; cin >> s;
        if(s=="PUSH"){
            int n;cin >> n;
            cin.ignore();
            st.push(n);
        }
        else if(s=="POP"){
            if(!st.empty()) st.pop();
        }
        else{
            if(st.empty()) cout << "NONE\n";
            else cout << st.top() << endl;
        }
    }
}