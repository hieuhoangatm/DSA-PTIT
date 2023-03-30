#include<bits/stdc++.h>
using namespace std;

void Gray(int n){
    if(n<=0) return;
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    for(int i=2;i<pow(2,n); i*=2){
        for(int j=i-1;j>=0;j--){
            v.push_back(v[j]);
        }
        for(int j=0;j<i;j++){
            v[j]= "0"+v[j];
        }
        for(int j=i;j<2*i;j++){
            v[j]="1"+v[j];
        }
    }
    for(string x:v) cout << x << " ";
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        Gray(n);
    }
}
