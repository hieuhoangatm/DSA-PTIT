#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1,s2; cin >> s1 >> s2;
		multiset<char> se;
		for(int i=0;i<s1.size();i++){
			se.insert(s1[i]);
		}
		int dem=0;
		for(int i=0;i<s2.size();i++){
			if(se.count(s2[i])) dem++;
		}
		cout << dem << endl;
	}
}
