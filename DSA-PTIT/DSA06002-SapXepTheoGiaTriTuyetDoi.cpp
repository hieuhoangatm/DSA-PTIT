#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int T, n, X, a[N];

bool cmp(int x, int y) {
    return abs(X - x) < abs(X - y);
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> X;
        for (int i = 0; i < n; i++) cin >> a[i];
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
