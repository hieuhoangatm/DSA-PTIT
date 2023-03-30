#include<bits/stdc++.h>
using namespace std;

int a[1005], n,k,ok;

void Sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0){
		 cout << k << endl;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
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
		int dem=0;
		for(int i=1;i<=k;i++){
			if(mp[a[i]]==0) dem++;
		//	mp[a[i]]++;
		}
		if(dem!=0) cout << dem << endl;
		//for(auto it:mp) cout << it.first << " "<<it.second<<endl;
		//cout << endl;
		
	}
}


