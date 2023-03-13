#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int t; cin >> t;
        queue<int> q;
        while(t--){
            int n; cin >> n;
            if(n==1){
                cout << q.size() << endl;
            }
            else if(n==2){
                if(!q.empty()) cout <<"NO\n";
                else cout << "YES\n";
            }
            else if(n==3){
                int x; cin >> x;
                q.push(x);
            }
            else if(n==4){
                if(!q.empty()){
                    q.pop();
                }
            }
            else if(n==5){
                if(!q.empty()) cout << q.front() << endl;
                else cout <<"-1\n";
            }
            else if(n==6){
                if(!q.empty()) cout << q.back() << endl;
                else cout << "-1\n";
            }
        }
    }
}