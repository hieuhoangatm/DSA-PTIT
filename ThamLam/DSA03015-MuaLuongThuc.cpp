#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,s,m; cin >> n >> s >> m;
        if(n*(s-s/7) < s*m) cout << "-1\n";
        else{
            for(int i=1;i<=s-(s/7);i++){
                if(n*i >= s*m){
                    cout << i <<endl;
                    break;
                }
            }
        }
    }
}