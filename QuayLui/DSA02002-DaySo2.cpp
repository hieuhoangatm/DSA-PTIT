#include<bits/stdc++.h>
using namespace std;

int n;

void check(){
	cin >> n;
	int a[100][100];
	for(int j=1;j<=n;j++) cin >> a[n][j];
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			a[i][j]=a[i+1][j]+a[i+1][j+1];
		}
	}
	for(int i=1;i<=n;i++){
		cout <<"[";
		for(int j=1;j<i;j++){
			cout << a[i][j]<<" ";
		}
		cout << a[i][i]<<"]";
		cout << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
