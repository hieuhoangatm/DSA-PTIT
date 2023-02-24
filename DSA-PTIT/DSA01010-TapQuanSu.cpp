#include<bits/stdc++.h>
using namespace std;

int n,k,a[1005],ok;

void Sinh(){
	int i=k;
	while(a[i]==n-k+i){
		i--;
	}
	if(i==0){
		//cout << k << endl;
		ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]= a[j-1]+1;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		map<int,int> mp;
		for(int i=1;i<=k;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		Sinh();
		ok=1;
		if(ok){
			for(int i=1;i<=k;i++){
				mp[a[i]]++;
			}
			int cnt=0;
			for(int i=1;i<=k;i++){
				if(mp[a[i]]==1) cnt++;
			}
			if(cnt!=0) cout << cnt << endl;
			else cout << k << endl;
		}
	}
}


