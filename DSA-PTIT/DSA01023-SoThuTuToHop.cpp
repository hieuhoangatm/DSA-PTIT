#include<bits/stdc++.h>
using namespace std;

int a[1005],ok,n,k;

void ktao(){
	for(int i=1;i<=k;i++) a[i]=i;
}

void Sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0) ok =0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	}
}

main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		int b[n];
		string x="";
		for(int i=1;i<=k;i++){
			cin >> b[i];
			x+=to_string(b[i])+" ";
		}
		ktao();
		ok=1;
		int dem=0;
		while(ok){
			string y="";
			for(int i=1;i<=k;i++){
				y+=to_string(a[i])+" ";
			}
			dem++;
			if(y==x){
				cout << dem << endl;
				break;
			}
			Sinh();
		}
	}
}
