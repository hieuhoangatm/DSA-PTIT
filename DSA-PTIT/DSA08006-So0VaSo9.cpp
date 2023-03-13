#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("9");
        int ok =0;
        while(!ok){
            string x= q.front();
            q.pop();
            if(stoi(x)%n==0){
                cout << x << endl;
                ok=1;
            }
            q.push(x+"0");
            q.push(x+"9");
        }
        
    }
}