#include<bits/stdc++.h>
using namespace std;

int a[100],b[100],n,k;
vector<vector<int>> v;

void ktao(){
	v.clear();
	cin >> n>>k;
	for(int i=1;i<=n;i++) cin >> b[i];
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int cnt=0;
			for(int x=1;x<=n;x++){
				if(a[x]) cnt++;
			}
			vector<int> tmp;
			if(cnt==k){
				for(int x=1;x<=n;x++){
					if(a[x]){
						tmp.push_back(b[x]);
					}
				}
			}
			sort(tmp.begin(),tmp.end());
			v.push_back(tmp);
		}
		else Try(i+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		Try(1);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++) cout << v[i][j] <<" ";
			cout << endl;
		}
		cout << endl;
	}
}
