#include<bits/stdc++.h>
using namespace std;

int n;
int used[1000],a[1000];

void Quaylui(int i){
    for(int j=1;j<=n;j++){
        if(used[j]==0){
            a[i]=j;
            used[j]=1;
            if(i==n){
                int ok=1;
                for(int i=2;i<=n-1;i++){
                    if(a[i]==1){
                        if(a[i-1]!=5 && a[i+1] !=5) ok=0;
                    }
                    if(a[i]==5){
                        if(a[i-1]!=1 && a[i+1] !=1) ok=0;
                    }
                    
                }
                if(ok){
                    for(int i=1;i<=n;i++){
                        cout << (char)(a[i]+'A'-1);
                    }
                    cout << endl;
                }
            }
            else Quaylui(i+1);
            used[j]=0;
        }
    }
}

int main(){
    char x; cin >> x;
    n= (int)x-'A'+1;
    Quaylui(1);
}