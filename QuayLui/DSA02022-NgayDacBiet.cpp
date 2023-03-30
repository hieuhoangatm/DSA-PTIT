#include<bits/stdc++.h>
using namespace std;

int a[105];
int b[105];
vector<string> v;
void Quaylui(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==8){
            string k; int ok=1;
            if(a[5]==0 || a[3]==1) ok=0;
            if(a[1]+a[2]==0 || a[3]+a[4]==0 ) ok=0;
            if(ok){
                for(int x=1;x<=8;x++){
                    if(x== 3 || x==5){
                        k+="/";
                    }
                    if(a[x]==1) k+='2';
                    else k+='0';
                }
                 v.push_back(k);
            }
        }
        else{
            Quaylui(i+1);
        }
    }
}

int main(){
    Quaylui(1);
    for(string x:v) cout << x << endl;
}