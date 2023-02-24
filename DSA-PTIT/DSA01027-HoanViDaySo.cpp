#include<bits/stdc++.h>
using namespace std;

int a[1005],n,ok;

void ktao(){
	for(int i=1;i<=n;i++) a[i]=i;
}
void Sinh(){
	int i=n-1;
	while(a[i]>a[i+1]){
		i--;
	}
	if(i==0) ok=0;
	else{
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

int main(){
	cin >> n;
	set<int> se;
	for(int i=1;i<=n;i++){
		int x; cin >> x;
		se.insert(x);
	}
	vector<int> v;
	for(auto it:se){
		v.push_back(it);
	}
	ok=1;
	ktao();
	while(ok){
		for(int i=1;i<=n;i++){
			cout << v[a[i]-1] << " ";
		}
			cout << endl;
			Sinh();
		
	}
}
