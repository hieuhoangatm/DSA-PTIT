#include<bits/stdc++.h>
using namespace std;

int a[100],n,ok;

void ktao(){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
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

bool check(){
	int l=1,r=n;
	while(l<r){
		if(a[l] != a[r]){
			return false;
		}
		l++;
		r--;	
	}
	return true;
}

int main(){
	cin >> n;
	ok=1;
	ktao();
	while(ok){
		if(check()){
			for(int i=1;i<=n;i++){
				cout << a[i] <<" ";
			}
			
			cout << endl;
		}
		Sinh();
		
	}
}


