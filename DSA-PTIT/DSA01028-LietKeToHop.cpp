#include<bits/stdc++.h>
using namespace std;

int a[1005], n,k,ok;

void sinh(){
	int i=k;
	while( a[i]==n-k+i ) i--;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	}
}

int main(){
	cin >> n >> k;
	int b[n];
	set<int> se;
	for(int i=1;i<=n;i++){
		cin >> b[i];
		se.insert(b[i]);
	}
	int x[n],dem=1;
	for(int i=1;i<=k;i++) a[i]=i;
	n=se.size();
	for(auto it:se){
		x[dem]=it;
		dem++;
	}
	ok=1;
	while(ok){
		for(int i=1;i<=k;i++){
			cout << x[a[i]] << " ";
		}
		cout << endl;
		sinh();
	}
}
