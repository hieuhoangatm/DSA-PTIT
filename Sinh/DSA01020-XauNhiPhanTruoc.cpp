#include<bits/stdc++.h>
using namespace std;

void Sinh(string s){
	int i= s.length()-1;
	while(i>=0 && s[i]=='0'){
		s[i]='1';
		i--;
	}
	if(s[i]=='1') s[i]='0';
//	if(i==-1){
//		cout << s << endl;
//	}
	cout << s << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		Sinh(s);
		
		
	}
}
