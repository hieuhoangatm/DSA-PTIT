#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        string x="",y="";
        for(int i=0;i<n;i+=2){
            x+=to_string(a[i]);
        }
        for(int i=1;i<n;i+=2){
            y+=to_string(a[i]);
        }
        cout << stoi(x)+stoi(y) << endl;
    }
}