#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        vector<int> v1(n),v2(m),v3(k);
        for(int i=0;i<n;i++) cin >> v1[i];
        for(int i=0;i<m;i++) cin >> v2[i];
        for(int i=0;i<k;i++) cin >> v3[i];
        int ok=0;
        for(int i=0;i<n;i++){
            if(find(v2.begin(), v2.end(), v1[i]) != v2.end() && find(v3.begin(), v3.end(), v1[i]) != v3.end()) {
                cout << v1[i] << " ";
                ok=1;
            }
        }
        if(!ok) cout <<"NO";
        cout << endl;
    }
}