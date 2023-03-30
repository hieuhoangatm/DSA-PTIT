#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=1;i<=n;i++) cin >> a[i];
		int l=1,r=n;
		if(r>l && a[l]>a[r]){
			cout << r-l<<endl;
			break;
		}
		else{
			l++;
			r--;
		}
	}
}
