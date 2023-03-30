#include<bits/stdc++.h>
using namespace std;

void check(int a[], int n){
	int s=0,ok=0;
	for(int i=0;i<n;i++) s+=a[i];
	int l=0,r;
	for(int i=0;i<n;i++){
		r= s-l-a[i];
		if(r==l){
			cout << i+1 << endl;
			ok=1;
			break;
		}
		l+=a[i];
	}
	if(!ok) cout <<"-1\n";
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		check(a,n);
	}
}

