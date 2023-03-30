#include<bits/stdc++.h>
using namespace std;

int c[1001][1001];

int qhd(string a, string b){
    int n=a.size(), m= b.size();
    for(int i=0;i<=n;i++) c[i][0]=0;
    for(int i=0;i<m;i++) c[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]) c[i][j]= c[i-1][j-1]+1;
            else c[i][j]= max(c[i-1][j], c[i][j-1]);
        }
    }
    return c[n][m];
}
int main(){
    int t; cin >> t;
    while(t--){
        string a,b; cin >> a >> b;
        cout << qhd(a,b) << endl;
    }
}