#include<bits/stdc++.h>
using namespace std;

int x[100],a[100],n;
vector< vector<int> > v;

void ktao(){
	v.clear();
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			int s=0;
			for(int k=1;k<=n;k++){
				if(x[k]) s+=a[k];
			}
			vector<int> tmp;
			if(s%2==1){
				for(int k=1;k<=n;k++){
					if(x[k]){
						tmp.push_back(a[k]);
					}
				}
			}
			sort(tmp.begin(),tmp.end(),greater<int>());
			v.push_back(tmp);
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		ktao();
		Try(1);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].size();j++) cout << v[i][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
}
