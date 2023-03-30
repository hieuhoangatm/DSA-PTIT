#include<bits/stdc++.h>
using namespace std;

string ktra(string s){
    stack<char> st;
    //int ok;
    //char x;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')'){
            st.push(s[i]);
        }
        else{
            int ok=0;
            char x= st.top();
            st.pop();
            while(x!='('){
                if(x=='+' || x=='/' || x=='-'|| x=='*') ok=1;
                x=st.top();
                st.pop();
            }
            if(!ok) return "Yes";
        }
    }
    return "No";
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        cout << ktra(s) << endl;
    }
}