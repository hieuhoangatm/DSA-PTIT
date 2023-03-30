#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	else if(a.second = b.second){
		return a.first < b.first;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector< pair<int,int> > v;
		set<int> se;
		map<int,int> mp;
		vector<int> v2;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
			se.insert(a[i]);
		}
		for(auto it:se){
			v2.push_back(it);
		}
		for(int it:v2){
			v.push_back(make_pair(it,mp[it]));
		}
		sort(v.begin(),v.end(),cmp);
		for(auto it:v){
			for(int i=0;i<it.second;i++) cout << it.first << " ";
		}
		cout << endl;
	}
}
