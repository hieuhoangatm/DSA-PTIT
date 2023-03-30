#include<bits/stdc++.h>
using namespace std;

int n,k,ok,a[1005];

void ktao(){
	for(int i=1;i<=n;i++) a[i]=0;
}

void Sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;	
	}
	if(i==0) ok=0;
	else{
		a[i]=1;
	}
}

int check(int x[], int n,int k){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=x[i];
	}
	if(sum!=k) return 0;
	return 1;
	
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ktao();
		ok=1;
		while(ok){
			if(check(a,n,k)){
				for(int i=1;i<=n;i++) cout << a[i];
				cout << endl;
			}
			Sinh();
		}
	}
}
