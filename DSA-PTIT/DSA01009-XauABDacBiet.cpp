#include<bits/stdc++.h>
using namespace std;

int a[1005],n,k,ok;

void ktao(){
	for(int i=1;i<=n;i++) a[i]=0;
}

void sinh(){
	int i=n;
	while(a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok =0;
	else{
		a[i]=1;
	}
}

bool check(){
	int dem=0,cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			dem++;
		}
		else dem=0;
		if(dem>k) return false;
		if(dem==k){
			cnt++;
		}
	}
	return cnt==1;
}

int main(){
	cin >> n >> k;
	ktao();
	ok=1;
	int dem=0;
	vector<string> v;
	while(ok){
		if(check()){
			string s="";
			for(int i=1;i<=n;i++){
				if(a[i]){
					s+= "B";
				}
				else s+= "A";
			}
			v.push_back(s);
		}
		sinh();
	}
	cout << v.size() << endl;
	for(string s:v) cout << s << endl;
}
