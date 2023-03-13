#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
int n,k;
struct Matrix{
    long long f[10][10];
};

Matrix operator* (Matrix A, Matrix B){
    int i,j,x;
    Matrix C;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            C.f[i][j]=0;
            for(x=0;x<n;x++){
                C.f[i][j]= (C.f[i][j]+ (A.f[i][x] * B.f[x][j]) % mod) % mod;
            }
        }
    }
    return C;
}

Matrix powerMod(Matrix A, int k){
    if(k==1) return A;
    Matrix X= powerMod(A,k/2);
    if(k%2==0) return X*X;
    return A*X*X;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Matrix Y,Z;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin >> Y.f[i][j];
        }
        Z= powerMod(Y,k);
        long long s=0;
        for(int i=0;i<n;i++){
            s+= (Z.f[i][n-1] % mod );
        }
        cout << s%mod << endl;
    }
}