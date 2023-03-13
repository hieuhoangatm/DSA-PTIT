#include<bits/stdc++.h>
using namespace std;

int a[25],ok,c[25],n,x;

int cnt=0;

void in(int m){
    cout <<"{";
    for(int i=1;i<m;i++) cout << c[i] << " ";
    cout << c[m] << "}";
}

void quaylui(int i,int s){
    int j;
    for(j=1;j<=n;j++){
        if(a[j] >= c[i-1] && s+a[j]<=x){
            c[i]=a[j];
            s+=a[j];
            if(s==x){
                ok=1;
                in(i);
                cnt++;
            }
            else{
                quaylui(i+1,s);
            }
            s-=a[j];
        }
    }
}

int main(){
    int t,i;
    cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i=1;i<=n;i++) cin >> a[i];
        c[0]=0;ok=0;
        quaylui(1,0);
        cout << cnt << endl;
        if(!ok) cout << "-1";
        cout << endl;
    }
}
