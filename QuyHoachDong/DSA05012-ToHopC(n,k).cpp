#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int c[1001][1001];
int main(){
    int n,k,i,j,t;
    for(i=0;i<=1000;i++){
            for(j=0;j<=i;j++){
                if(j==0  || i==j) c[i][j]=1;
                else{
                    c[i][j]= (c[i-1][j-1] + c[i-1][j]) % mod;
                } 
            }
    }
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << c[n][k] << endl;
    }
    return 0;
}