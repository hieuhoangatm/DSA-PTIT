#include<bits/stdc++.h>
using namespace std;

int kq(int n,long long k){
	long long x= pow(2,n-1);
	if(x==k) return n;
	if(x>k) return kq(n-1,k);
	return kq(n-1,k-x);
}
main(){
	int t; cin >> t;
	while(t--){
		int n; long long k; cin >> n >> k;
		cout << kq(n,k) << endl;
	}
}
