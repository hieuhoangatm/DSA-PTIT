#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        priority_queue<int, vector<int>, greater<int> > pq;
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            pq.push(a[i]);
        }
        long long s=0;
        while(pq.size() >1){
            int x = pq.top();
            pq.pop();
            int y= pq.top();
            pq.pop();
            pq.push(x+y);
            s+= x+y;
        }
        cout << s << endl;
    }
}