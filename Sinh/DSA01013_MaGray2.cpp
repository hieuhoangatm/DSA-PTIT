#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        string s; cin >> s;
        string x="";
        x+= s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]=='1'){
                if(x[i-1]=='1') x+='0';
                else x+='1'; 
            }
            else{
                x+=x[i-1];
            }
            
        }
        cout << x << endl;
    }
}