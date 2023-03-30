#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int cnt=0;
		for(int i=0;i<n;i++){
			int m= a[i];
			int pos=0;	
			for(int j=i+1;j<n;j++){
				if(a[j] < m){
					m= a[j];
					pos=j;
				}
			}
			if(a[i] > m){
				swap(a[i],a[pos]);
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	
}
