#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	int dem=0;
	for(int i=0;i<n-1;i++){
		int minpos=i;
		for(int j=i+1;j<n;j++){
			  if(a[j] < a[minpos]) minpos=j;
		}
		dem++;
		swap(a[i],a[minpos]);
		cout << "Buoc " << dem <<": ";
		for(int k=0;k<n;k++) cout << a[k] << " ";
		cout << endl;
	}
	
}
