#include<bits/stdc++.h>
using namespace std;

int a[100];
bool chuaxet[100];
string s;

void QuayLui(int i){
	for(int j=0;j<s.length();j++){
		if(!chuaxet[j]){
			a[i]=j;
			chuaxet[j]=true;
			if(i==s.length()){
				for(int x=1;x<=s.length();x++){
					cout << s[a[x]];
				}
				cout << " ";
			}
			else{
				QuayLui(i+1);
			}
			chuaxet[j]=false;	
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		memset(chuaxet,false,sizeof(chuaxet));
		sort(s.begin(),s.end());
		QuayLui(1);
		cout << endl;
	}
}
