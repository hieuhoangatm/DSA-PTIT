#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int mi=1e9;
		for(int i=1;i<n;i++){
			mi= min(mi,a[i]-a[i-1]);
		}
		cout << mi << endl;
	}
}
