#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k, a,b;
        cin >> k >> a >> b;
        string A=to_string(a), B=to_string(b);
        if(A.size() < B.size()){
            while(A.size() < B.size()) A= "0"+A;
        }
        else if (B.size() < A.size()){
            while(B.size() < A.size()) B= "0"+B;
        }
        string res="";
        int nho=0;
        for(int i=A.size()-1; i>=0;i--){
            int so= int(A[i]-'0')+ int(B[i]-'0')+nho;
            res= char(so%k+'0')+res;
            nho=so/k;
        }
        if(nho>0) res= char(nho+'0')+res;
        cout << res << endl;
    }
}