#include<bits/stdc++.h>
using namespace std;

int check(string s){
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return 0;
            char out = s[i], in = st.top();
            if(in == '(' && out ==')') st.pop();
            else if(in =='{' && out =='}') st.pop();
            else if(in =='[' && out ==']') st.pop();
            else return 0;
        }
    }
    if(st.empty()) return 1;
    else return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)) cout <<"YES\n";
        else cout <<"NO\n";
    }
}