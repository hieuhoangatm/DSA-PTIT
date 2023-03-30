#include<bits/stdc++.h>
using namespace std;

int a[1005],ok,n,k;

void ktao(){
	for(int i=1;i<=k;i++) a[i]=i;
}

void Sinh(){
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j] = a[j-1]+1;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ok=1;
		ktao();
		while(ok){
			for(int i=1;i<=k;i++){
				cout << char(a[i]+'A'-1	);
			}
			cout << endl;
			Sinh();
		}
	}
}
