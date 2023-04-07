#include<bits/stdc++.h>
using namespace std;

int uutien(char c){
    if(c=='^') return 5;
    if(c=='*' || c=='/') return 4;
    if(c=='+' || c=='-') return 3;
    return 2;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        string res="";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])) res+= s[i];
            else if(s[i]=='(') st.push(s[i]);
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'|| s[i]=='^'){
                while(!st.empty() && uutien(st.top()) >= uutien(s[i])){
                    res+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(st.size() && st.top() != '('){
                    res+= st.top();
                    st.pop();
                }
                st.pop();
            }
        }
        // while(st.size()){
        //     if(st.top() != '(') res+= st.top();
        //     st.pop();
        // }
        cout << res << endl;
    }
}