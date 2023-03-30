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
        int x,y,z; x=y=z=0; int ok=0;
        while(x<n && y<m && z<k){
            if(v1[x]==v2[y] && v2[y]==v3[z]){
                cout << v1[x] << " ";
                ok=1;
                x++;y++;z++;
            }
            else if(v1[x] < v2[y]) x++;
            else if(v2[y] < v3[z]) y++;
            else z++;
        }
        if(!ok) cout <<"NO";
        cout <<"\n";
    }
}