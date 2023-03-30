#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int f[105][50005]={};
void tinh(){
    int i,j,k;
    for(i=1;i<10;i++) f[1][i]=1;
    for(i=1;i<=100;i++){
        for(j=0;j<=9;j++){
            for(k=j;k<=50000;k++)
                f[i][k]=(f[i][k]+f[i-1][k-j]) %m;
        }
    }
}

int main(){
    int t; cin  >> t;
    tinh();
    while(t--){
        int n,k; cin >> n >> k;
        cout << f[n][k] << endl;
    }
}