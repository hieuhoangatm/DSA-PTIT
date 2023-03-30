#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        long long tich=1;
        long long s1=0,s2=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1'){
                s1+=pow(2,a.size()-i-1);
            }
        }
        for(int i=0;i<b.size();i++){
            if(b[i]=='1'){
                s2+=pow(2,b.size()-i-1);
            }
        }
        cout << s1*s2 << endl;
    }
}