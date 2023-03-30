#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,s,dem;
void Try(int i){
    for(int j= a[i-1]+1; j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            int sum=0;
            for(int x=1;x<=k;x++) sum+=a[x];
            if(sum==s) dem++;
        }
        else Try(i+1);
    }
}
int main(){
    while(1){
        cin >> n>>k>>s;
        dem=0;
        if(n==0 &&k==0 &&s==0){
            break;
        }
        Try(1);
        cout << dem << endl;
    }
}