#include<bits/stdc++.h>
using namespace std;

int a[100],k;
string s;
vector<string> v;

void Quaylui(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==k){
            string x="";
            for(int z=1;z<=k;z++){
                if(a[z]==1){
                    x+=s[z-1];
                }
            }
            v.push_back(x); 
        }
        else{
            Quaylui(i+1);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        cin >> k>>s;
        Quaylui(1);
        sort(v.begin(),v.end());
        for(string x:v) cout <<x <<" ";
        cout << endl;
    }
}