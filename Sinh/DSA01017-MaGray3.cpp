#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string x="";
        x+=s[0];
        for(int i=1;i<s.size();i++){
            int k= (int)s[i];
            int y= (int)s[i-1];
            string z= to_string(k^y);
            x+=z;
        }
        cout << x << endl;
    }
}