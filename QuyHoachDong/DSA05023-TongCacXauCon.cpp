#include<bits/stdc++.h>
using namespace std;
string s;
using ll = long long;
long long f[25];
long long qhd(){
    int n=s.length();
    f[0]=s[0]-'0';
    if(n==1) return f[0];
    f[1]=f[0]*11 + 2*(s[1]-'0');
    for(int i=2;i<n;i++){
        int c=s[i]-'0';
        f[i]= f[i-1] + (f[i-1]-f[i-2])*10 + c*(i+1);
    }
    return f[n-1];
}

main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        cout <<qhd()<<endl;
    }
}