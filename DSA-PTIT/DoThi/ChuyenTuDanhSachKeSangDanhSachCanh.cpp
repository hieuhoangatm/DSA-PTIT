#include<bits/stdc++.h>
using namespace std;

int n;
vector<pair<int,int>> v;

int main(){
	cin >> n;
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string num;
		while(ss >> num){
			if(stoi(num)>i) v.push_back({i,stoi(num)});
		}
	}
	for(auto it:v){
		cout << it.first << " "<<it.second << endl;
	}
}
