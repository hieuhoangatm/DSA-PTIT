#include<bits/stdc++.h>
using namespace std;

int const maxn=1e6;
int a[maxn],n;

int ktra(){
    int inc[n],dec[n];
    memset(inc,0,sizeof(inc));
    memset(dec,0,sizeof(dec));
    inc[0]=dec[n-1]=1;
    int ans,i;
    for(i=1;i<n;i++){
        if(a[i] > a[i-1]){
            inc[i]=inc[i-1]+1;
        }
        else inc[i]=1;
    }
    for(i=n-2;i>=0;i--){
        if(a[i]> a[i+1]){
            dec[i]= dec[i+1]+1;
        }
        else{
            dec[i]=1;
        }
    }
    ans= inc[0]+dec[0]-1;
    for(i=1;i<n;i++){
        ans=max(ans,inc[i]+dec[i]-1);
    }
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        cout << ktra() << endl;
    }
}