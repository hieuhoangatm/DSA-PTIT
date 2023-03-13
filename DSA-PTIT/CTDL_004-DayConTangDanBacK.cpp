#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
    for(int i=2;i<=n;i++){
        if(a[i]<a[i-1]) return 0;
    }
    return 1;
}

int a[100],n,k,ok;
void ktao(){
    for(int i=1;i<=k;i++)  a[i]=i;
}

void Sinh(){
    int i=k;
    while(a[i]==n-k+i) i--;
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
    }
}
int main(){
    cin >> n >> k;
    ktao();
    ok=1;
    int b[n];
    for(int i=1;i<=n;i++) cin >> b[i];
    int dem=0;
    while(ok){
        int x[k];
        for(int i=1;i<=k;i++){
            x[i]=b[a[i]];
        }
        if(check(x,k)) dem++;
        Sinh();
    }
    cout << dem << endl;
}
