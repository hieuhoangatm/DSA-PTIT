#include <bits/stdc++.h>
using namespace std; 
int n, a[10010]; 
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i]; 
    sort(a, a + n);
    vector<long long > v;
    v.push_back(a[0]*a[1]);
    v.push_back(a[n-1]*a[n-2]);
    v.push_back(a[n-1]*a[n-2]*a[n-3]);
    v.push_back(a[0]*a[1]*a[n-1]);
    sort(v.begin(),v.end());
    cout << v[v.size()-1] << endl;
}