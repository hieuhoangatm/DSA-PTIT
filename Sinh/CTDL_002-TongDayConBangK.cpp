#include<bits/stdc++.h>
using namespace std;

int n,k,ok,a[1005];

void ktao(){
	for(int i=1;i<=n;i++) a[i]=0;
}

void Sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]=1;
	}
}

int main(){
	cin >> n >> k;
	ktao();
	Sinh();
	ok=1;
	vector<string> v;
	int b[n];
	for(int i=1;i<=n;i++) cin >> b[i];
	int dem=0;
	while(ok){
		string x="";
		int s=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1){
				x+= to_string(b[i])+" ";
				s+=b[i];
			}
		}
		if(s==k){
			v.push_back(x);
			dem++;
		}
		Sinh();
	}
	for(string it:v) cout << it <<endl;;
	cout << dem <<  endl;
	
}
