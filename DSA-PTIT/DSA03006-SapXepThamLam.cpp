#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,ok=1; cin >> n; 
        vector<int> a(n),b(n);
        for(int i= 0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i] !=b[i] && a[i]!=b[n-i-1]){
                ok=0;
                break;
            }
        }
        if(ok) cout <<"Yes\n";
        else cout <<"No\n";
    }
}
