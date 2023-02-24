#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int b[n], dem=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[dem]=a[i];
			dem++;
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i] != b[i]){
				cout << i+1<<" ";
				break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(a[i] != b[i]){
				cout << i+1 << " ";
				break;
			}
		}
		cout << endl;
	}
}
