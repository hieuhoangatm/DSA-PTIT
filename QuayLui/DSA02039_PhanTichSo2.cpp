#include<bits/stdc++.h>
using namespace std;

int n,dem;
vector<vector<int>> res;
void Try(int i, int sum, vector<int> v){
    if(sum>n){
        return;
    }
    if(sum==n){
        sort(v.begin(), v.end(), greater<int>());
        dem++;
        res.push_back(v);
    }
    for(int j=i;j<=n;j++){
        if(j+sum<=n){
            v.push_back(j);
            Try(j,sum+j,v);
            v.pop_back();
        }
    }
}

bool cmp(vector<int> a, vector<int> b){
    if(a[0] != b[0]) return a[0] > b[0];
    else if(a[1] != b[1]) return a[1] > b[1];
    else if(a[2] != b[2]) return a[2] > b[2];
    return a.size() < b.size();
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        dem=0;
        vector<int> v;
        res.clear();
        Try(1,0,v);
        sort(res.begin(),res.end(),cmp);
        cout << dem << endl;
        for(int i=0;i<res.size();i++){
            cout <<"(";
            for(int j=0;j<res[i].size()-1;j++){
                cout << res[i][j]<<" ";
            }
            cout << res[i][res[i].size()-1] << ") ";
        }
        cout << endl;
  }
}