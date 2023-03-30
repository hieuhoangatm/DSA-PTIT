#include<bits/stdc++.h>
using namespace std;

int a[1005],ok,n;

void ktao(){
	for(int i=1;i<=n;i++) a[i]=i;
}

void Sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		i--;
	}
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i] > a[j] ) j--;
		swap(a[i], a[j]);
		reverse(a+i+1,a+n+1);
		
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int b[n];
		string z="";
		for(int i=1;i<=n;i++){
			cin >> b[i];
			z+=to_string(b[i])+" ";
		}
		ktao();
		ok=1;
		//vector<string> v;
		int dem=1;
		while(ok){
			string x="";
			for(int i=1;i<=n;i++){
				x+= to_string(a[i])+" ";
			}
			if(x==z){
				cout << dem << endl;
				break;
			}
			dem++;
			Sinh();
		}
	}
}
