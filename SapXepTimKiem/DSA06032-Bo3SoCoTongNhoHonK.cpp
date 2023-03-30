#include<bits/stdc++.h>
using namespace std;
int k=3;
int a[1005], n,ok,K;

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
	int t; cin >> t;
	while(t--){
		cin >> n>>K ;
		int b[n];
		for(int i=1;i<=n;i++)cin >> b[i];
		for(int i=1;i<=k;i++) a[i]=i;
		ok=1;
		int dem=0;
		while(ok){
			int s=0;
			for(int i=1;i<=k;i++) s+= b[a[i]];
			if(s<K) dem++;
			sinh();
		}
		cout << dem << endl;
	}
}

