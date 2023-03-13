#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100];
        a[1]=1;a[2]=2;a[3]=5;a[4]=10;a[5]=20;
        a[6]=50; a[7]=100;a[8]=200;a[9]=500;
        a[10]=1000;
        int dem=0, x=n;
        for(int i=10;i>=1;i--){
            while(a[i]<=x){
                x-=a[i];
               // cout << a[i] << " ";
                dem++;
            }
        }
        cout << dem << endl;
    }
}