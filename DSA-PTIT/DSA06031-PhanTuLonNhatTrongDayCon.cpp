#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<=n-k;i++){
			int m=0;
			for(int j=i;j<i+k;j++){
				m= max(m,a[j]);
			}
			cout << m << " ";
		}
		cout << endl;
	}
}
