// Created by Nguy?n M?nh Qu�n

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main()
{
    //faster();
    int  n, m, x;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    vector<int> c;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; i += 2) b.pb(a[i]);
    for(int i = 1; i < n; i += 2) c.pb(a[i]);
    sort(all(c), greater<int>());
    sort(all(b));
    //m = n;
    //n >>= 1;
    for(int i = 0; i < n/2; ++i) cout << b[i] << ' ' << c[i] << ' ';
    //if(m & 1) cout << b.back() << ' ';
    if(n%2!=0) cout << b[(n/2)];
    cout << endl;
}
