#include<bits/stdc++.h>
using namespace std;

int M=1e9+7;

long long power(int a,int n){
	if(n==0) return 1;
	long long x= power(a,n/2);
	if(n%2==0) return x*x%M;
	return a*(x*x%M)%M;
}

int main(){
	int t,a,n;
	cin >> t;
	while(t--){
		cin >> a >> n;
		cout << power(a,n);
		cout << endl;
	}
}
