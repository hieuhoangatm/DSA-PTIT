#include<bits/stdc++.h>
using namespace std;

int n,k,x[100];
vector<string> v;

void ktao(){
	cin >> n>>k;
	set<string> se;
	string s;
	for(int i=1;i<=n;i++){
		cin >> s;
		se.insert(s);
	}
	for(auto it:se) v.push_back(it);
}


void Try(int i){
	for(int j=x[i-1]+1;j<=v.size()-k+i;j++){
		x[i]=j;
		if(i==k){
			for(int m=1;m<=k;m++){
				cout << v[x[m]-1] <<" ";
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	ktao();
	Try(1);
}
