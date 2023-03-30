#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll F[100];

char check(int n, ll k){
	if(n==1) return '0';
	if(n==2) return '1';
	if(k> F[n-2]) return check(n-1,k-F[n-2]);
	return check(n-2,k);
}
int main(){
	int t; cin >> t;
	F[0]=0,F[1]=1;
	for(int i=2;i<93;i++) F[i]=F[i-2]+F[i-1];
	while(t--){
		int n; ll k; cin >> n >> k;
		cout << check(n,k) << endl;
	}
}
