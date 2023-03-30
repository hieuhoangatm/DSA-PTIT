#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    string c=a,d=b;
    for(int i=0;i<a.size();i++){
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='5') d[i]='6';
    }
    string x=a,y=b;
    for(int i=0;i<a.size();i++){
        if(a[i]=='6') x[i]='5';
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='6') y[i]='5';
    }
    cout << stoi(x)+stoi(y) << " ";
    cout << stoi(c)+stoi(d) << endl;
}