#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int ok=0;
		for(int i=0;i<n;i++) cin >> a[i];
		int x=1;
		while(x<n-1){
			int s=0,s2=0;
			for(int i=0;i<x;i++ ) s+=a[i];
			for(int i=x+1;i<n;i++) s2+=a[i];
			if(s==s2){
				cout << x+1 << endl;
				ok=1;
				break;
			}
			x++;
		}
		if(!ok) cout << "-1\n";
	}
}
