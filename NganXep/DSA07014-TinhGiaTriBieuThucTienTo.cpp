#include<bits/stdc++.h>
using namespace std;

int tinh(int a, int b, char c){
    if(c=='*') return a*b;
    if(c=='/') return a/b;
    if(c=='+') return a+b;
    return a-b;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        for(int i=s.size()-1;i>=0;i--){
            if(isdigit(s[i])) st.push(s[i]-'0');
            else{
                int a= st.top(); st.pop();
                int b= st.top(); st.pop();
                st.push(tinh(a,b,s[i]));
            }
        }
        cout << st.top() << endl;
    }
}