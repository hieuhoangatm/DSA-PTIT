#include<bits/stdc++.h>
using namespace std;

int const maxn = 1e6;
int a[maxn],n;

int ktra(){
    int inc[n],dec[n];
    memset(inc,0,sizeof(inc));
    memset(dec,0,sizeof(dec));
    //inc[0]=a[0]; dec[n-1]=a[n-1];
    int sum=0, i,j;
    for(i=0;i<n;i++){
        inc[i]=a[i];
        for(j=0;j<i;j++){
            if(a[i] > a[j]){
                inc[i]=max(inc[i],inc[j]+a[i]);
            }
        }
    }
    for(i=n-1;i>=0;i--){
        dec[i]=a[i];
        for(j=n-1;j>i;j--){
            if(a[i]> a[j]) dec[i]=max(dec[i],dec[j]+a[i]);
        }
    }
    for(i=0;i<n;i++){
        sum= max(sum,inc[i]+dec[i]-a[i]);
    }
    return sum;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        cout << ktra() << endl;
    }
}