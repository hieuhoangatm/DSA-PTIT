#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        int cnt=0;
        for(int i=a[0];i<=a[n-1];i++){
            mp[i]++;
            if(mp[i] > 1 ) cnt++;
        }
        int x= a[n-1]-a[0]+1;
       
        cout << x-cnt << endl;
    }
}
