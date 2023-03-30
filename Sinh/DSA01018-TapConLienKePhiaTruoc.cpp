#include<bits/stdc++.h>
using namespace std;

int n,k,ok,a[1000];
vector<string> v;

void ktao(){
    for(int i=1;i<=k;i++) a[i]=i;
}

void Sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0){
        string x="";
        for(int i=1;i<=k;i++){
            x+=to_string(a[i])+" ";
        }
        v.push_back(x);
        ok=0;
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1; 
        }
        string z="";
        for(int x=1;x<=k;x++){
            z+=to_string(a[x])+" ";
        }
        v.push_back(z);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        ok=1;
        cin >> n >> k;
        string res="";
        for(int i=1;i<=k;i++){
            int x; cin >> x;
            res+=to_string(x)+" ";
        }
        ktao();
        while(ok){
            Sinh();
        }
        int check=0;
        for(int i=1;i<=v.size();i++){
            if(v[i]==res){
                cout << v[i-1] << endl;
                check=1;
                break;
            }
        }
        if(!check) cout <<v[v.size()-1] << endl;
    }
}

