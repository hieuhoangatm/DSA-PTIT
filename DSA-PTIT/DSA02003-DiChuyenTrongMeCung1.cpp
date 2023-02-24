#include<bits/stdc++.h>
using namespace std;

int a[100][100], n;
int ok=0;
vector<string> res;

void ktao(){
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin >> a[i][j];
	}
	ok=0;
	res.clear();
}

void Try(int i,int j, string s){
	if(i==1 && j==1 && a[i][j]==0){
		ok=0;
		return;
	}
	if(i==n && j==n && a[i][j]==1){
		res.push_back(s);
		ok=1;
		return;
	}
	if(i<n && a[i+1][j]) Try(i+1,j,s+"D");
	if(j<n && a[i][j+1]) Try(i,j+1,s+"R");
	if(i<n && j<n && a[i+1][j]==0 && a[i][j+1]==0 || i>n || j>n) return;
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		Try(1,1,"");
		if(!ok){
			cout <<"-1\n";
		}
		else{
			sort(res.begin(),res.end());
			for(int i=0;i<res.size();i++){
				cout << res[i] <<" ";
			}
			cout << endl;
		}
	}
}
