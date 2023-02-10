#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		long long cnt=0;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			auto it = lower_bound(a+i+1, a+n, k-a[i]);
			if(it != a+n){
				if(*it == k-a[i]){
					auto it2 = upper_bound(a+i+1, a+n, k-a[i]);
					it2--;
					cnt+= it2-it+1;
				}
			}
		}
		cout << cnt << endl;
	}
}
