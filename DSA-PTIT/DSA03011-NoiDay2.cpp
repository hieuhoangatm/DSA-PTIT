#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        int a[n];
        for(int &x: a) cin >> x;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int x:a) pq.push(x);
        long long s=0;
        while(pq.size()>1){
            long long x= pq.top()%mod;
            pq.pop();
            long long y= pq.top()%mod;
            pq.pop();
            s+= (x+y);
            s%=mod;
            pq.push((x+y)%mod);
        }
        cout << s << endl;
    }
}