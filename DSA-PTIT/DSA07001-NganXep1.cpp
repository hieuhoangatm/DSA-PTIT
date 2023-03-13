#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    string s;
    while(cin >> s){
        int n;
        if(s=="push"){
            cin >> n;
            cin.ignore();
            st.push(n);
        }
        else if(s=="pop"){
            if(!st.empty()){
                st.pop();
            }
            else{
                cout <<"empty\n";
                break;
            }
        }
        else{
            if(st.empty()){
                cout <<"empty\n";
                break;
            }
            vector<int> v;
            while(!st.empty()){
                int x= st.top();
                v.push_back(x);
                st.pop();
            }
            for(int i=v.size()-1;i>=0;i--){
                st.push(v[i]);
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}