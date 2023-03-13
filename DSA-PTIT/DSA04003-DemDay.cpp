#include<bits/stdc++.h>
using namespace std;

int M=123456789;

long long power(int a,long long n){
	if(n==0) return 1;
	long long x= power(a,n/2);
	if(n%2==0) return x*x%M;
	return a*(x*x%M)%M;
}

int main(){
	int t;long long n;
	cin >> t;
	while(t--){
		cin >> n;
		cout <<power(2,n-1);
		cout << endl;
	}
}
