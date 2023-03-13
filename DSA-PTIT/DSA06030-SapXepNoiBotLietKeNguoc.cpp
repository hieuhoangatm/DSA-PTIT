#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
int dem=0;
bool check(int a[], int n){
	for(int i=1;i<n;i++){
		if(a[i] < a[i-1]) return 0;
	}
	return 1;
}
void sapxep(int a[], int n){
	int i,j,t,ok;
	for(int i=0;i<n;i++){
		ok=1;
		for(int j=0;j<n-1-i;j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				ok=0;
			}
		}
		if(ok) break;
		for(int k=0;k<n;k++) v[i].push_back(a[k]);
		dem++;
	}
}

main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(int i=0;i<n;i++) cin >> a[i];
    	if(check(a,n)){
    		cout << "Buoc 1: ";
			for(int i=0;i<n;i++){
				cout << a[i]<<" ";
			}
			cout << endl;
		}else{
	    	sapxep(a,n);
	    	int m=dem;
	    	for(int i=m-1;i>=0;i--){
	    		cout << "Buoc "<<dem << ": ";
	    		for(int j=0;j<v[i].size();j++) cout << v[i][j] << " ";
	    		cout << endl;
	    		dem--;
			}
			dem=0;
			for(int i=0;i<100;i++){
				v[i].clear();
			}
		}
    }	
}
