#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	vector<int> v;
	for(int i=0;i<n;i++){
		v.push_back(a[i]);
		sort(v.begin(),v.end());
		cout << "Buoc " << i << ": ";
		for(auto it:v) cout << it << " ";
		cout << endl;
	}
}

