#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m,n,k; cin >> m>>n>>k;
		int a[n],b[m];
		//mset<int> se;
		int c[n+m],dem=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			c[dem]=a[i];
			dem++;
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
			c[dem]=b[i];
			dem++;
		}
		sort(c,c+dem);
		cout << c[k-1]<<endl;
		
		
	}
}
