#include<bits/stdc++.h>
using namespace std;
int f[10002];
// f[1]=1; f[2]=2; f[3]=3;

// for(4,10000){
//     f[i]=i;
//     for(j=1,j<=sqrt(i);){
//         f[i]=min(f[i],f[i-j*j]+1);
//     }
// }
// cout << f[n];

void ktao(){
    f[1]=1; f[2]=2; f[3]=3;
    for(int i=4;i<=10000;i++){
        f[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            f[i]=min(f[i],f[i-j*j]+1);
        }
    }
}

int main(){
    int t; cin >> t;
    ktao();
    while(t--){
        int n; cin >> n;
        cout << f[n] << endl;
    }
}

