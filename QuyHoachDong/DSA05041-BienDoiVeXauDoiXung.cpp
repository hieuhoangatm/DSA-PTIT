#include<bits/stdc++.h>
using namespace std;

int qhd(string s){
    int n=s.size();
    s=" "+s;
    int f[n+1][n+1];
    memset(f,0,sizeof(f));
    for(int i=n-1;i>=1;i--){
        for(int j=i+1;j<=n;j++){
            if(s[i]==s[j]) f[i][j] = f[i+1][j-1];
            else f[i][j]= min(f[i+1][j], f[i][j-1])+1;
        }
    }
    return f[1][n];
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << qhd(s) << endl;
    }
}