#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n){
	for(int i=0;i<n;i++) cout << a[i] <<" ";
	cout << endl;
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
		cout << "Buoc " << i+1 <<": ";
		in(a,n); 
		//if(ok) break;
	}
}
main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sapxep(a,n);

}
