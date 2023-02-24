#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[105],b[105];
vector<vector<int>> v;

void ktao(){
	v.clear();
	cin >> n>>k;
	for(int i=1;i<=n;i++) cin >> b[i];
	sort(b+1,b+n+1);
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int s=0;
			for(int x=1;x<=n;x++){
				if(a[x]) s+=b[x];
			}
			if(s==k){
				vector<int> tmp;
				for(int x=1;x<=n;x++) if(a[x]) tmp.push_back(b[x]);
				v.push_back(tmp);
			}
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	int t;cin >> t;
	while(t--){
		ktao();
		Try(1);
		if(v.size()==0) cout <<"-1\n";
		else{
			sort(v.begin(),v.end());
			for(int i=0;i<v.size();i++){
				cout <<"[";
				for(int j=0;j<v[i].size()-1;j++){
					cout << v[i][j]<<" ";
				}
				cout << v[i][v[i].size()-1] <<"] ";
			}
		}
		cout << endl;
	}
}


