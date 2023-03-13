#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		vector<int> v[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int dem=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i],a[j]);
			}
			for(int k=0;k<n;k++){
				v[i].push_back(a[k]);
			}
			dem++;
		}
		int m=dem;
		for(int i=m-1;i>=0;i--){
			cout <<"Buoc "<<dem << ": ";
			for(int j=0;j<v[i].size();j++) cout << v[i][j] << " ";
			cout << endl;
			dem--;
		}
	}
}
