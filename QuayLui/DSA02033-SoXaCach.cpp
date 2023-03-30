#include<bits/stdc++.h>
using namespace std;

int a[1000],n;
int used[1000];
void Quaylui(int i){
    for(int j=1;j<=n;j++){
        if(used[j]==0){
            a[i]=j;
            used[j]=1;
            if(i==n){
                int ok=1;
                for(int x=2;x<=n;x++){
                    if( abs( a[x]-a[x-1] ) ==1) ok=0;
                }
                if(ok){
                    for(int x=1;x<=n;x++) cout << a[x];
                    cout << endl;
                }
            }
            else{
                Quaylui(i+1);
            }
            used[j]=0;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Quaylui(1);
    }
}