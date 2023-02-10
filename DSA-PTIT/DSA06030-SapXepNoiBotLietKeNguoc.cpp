#include<bits/stdc++.h>
using namespace std;

vector<string> v;
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
		string s="";	
		for(int k=0;k<n;k++){
			s+= to_string(a[k]);
		}
		v.push_back(s);
		s="";
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
	    	for(int i=v.size()-1;i>=0;i--){
	    		cout << "Buoc " << i+1 <<": ";
	    		string x=v[i];
	    		for(int j=0;j<x.size();j++) cout << x[j] << " ";
	    		cout << endl;
	    	}
		}
    }	
}
