#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=1;i<=n;i++) cin >> a[i];
	int b[n],c[n],dem1=0,dem2=0;
	for(int i=1;i<=n;i++){
		if(i%2==1){
			b[dem1]=a[i];
			dem1++;
		}
		else{
			c[dem2]=a[i];
			dem2++;
		}
	}
	sort(b,b+dem1);
	sort(c,c+dem2,greater<int>());
	int m=min(dem1,dem2);
	for(int i=0;i<m;i++) cout << b[i] << " "<<c[i]<<" ";
	if(dem1!=dem2) cout << b[dem1-1];
	
}
