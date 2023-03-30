#include<bits/stdc++.h>
using namespace std;

int M=1e9+7;

long long power(long long a,long long n){
	if(n==0) return 1;
	long long x= power(a,n/2); //cout << "Gia tri cua x: " << x << endl;
	if(n%2==0) return x*x%M;
	return a*(x*x%M)%M;
}


int main(){
	int t; cin >> t;
	while(t--){
		string a; cin >> a;
		string s="";
		for(int i=a.size()-1;i>=0;i--) s+=a[i];
		long long m=stoll(a), n =stoll(s);
		cout << power(m,n) << endl;
	}
}
