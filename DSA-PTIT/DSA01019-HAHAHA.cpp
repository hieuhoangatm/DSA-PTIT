#include<bits/stdc++.h>
using namespace std;

int n,ok, a[1005];

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

bool check(int a[],int n){
	if(a[1]==0) return false;
	if(a[n]==1) return false;
	for(int i=1;i<=n-1;i++){
		if(a[i]==1 && a[i+1] == 1) return false;
	}	
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok=1;
		while(ok){
			if(check(a,n)){
				for(int i=1;i<=n;i++){
					if(a[i]==0) cout << "A";
					else cout << "H";
				}
				cout << endl;
			}
			Sinh();
		}
		cout << endl;
	}
}
