#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],ok=1;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]>0) ok=1;
		}
		int Max=a[0];
		if(!ok){
			for(int i=1;i<n;i++){
				Max=max(Max,a[i]);
			}
		}
		else{
			int sum=0;
			for(int i=0;i<n;i++){
				if(sum+a[i] < 0){
					sum=0; continue;
				}
				sum+=a[i];
				Max=max(Max,sum);
			}
		}
		cout << Max << endl;
	}
}
