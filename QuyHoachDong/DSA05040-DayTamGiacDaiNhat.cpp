#include<bits/stdc++.h>
using namespace std;
int const maxn=1e6;
int a[maxn],n;

int ktra(){
    int inci[n];
    int deci[n];
    memset(inci, 0,sizeof(inci));
    memset(deci,0,sizeof(deci));
    int ans,i;
    inci[0]=deci[n-1]=1;
    for(i=1;i<n;i++){
        if(a[i] > a[i-1]) inci[i]= inci[i-1]+1;
        else inci[i]=1;
    }
    for(i=n-2; i>=0;i--){
        if(a[i] > a[i+1]) deci[i]= deci[i+1] +1;
        else deci[i]=1;
    }
    ans= inci[0]+ deci[0]-1;
    for(i=1;i<n;i++){
        ans= max(ans, inci[i]+deci[i]-1);
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