#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;
struct Matrix{
    long long f[2][2];
};

Matrix operator* (Matrix A, Matrix B){
    int i,j,x;
    Matrix C;
    for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            C.f[i][j]=0;
            for(x=0;x<=1;x++){
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

long long Fibo(int n){
    Matrix A;
    A.f[0][0]=1; A.f[0][1]=1; A.f[1][0]=1; A.f[1][1]=0;
    Matrix KQ=powerMod(A,n);
    return KQ.f[0][1];
}

int main(){
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        cout << Fibo(n) << endl;
    }
}