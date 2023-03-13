#include<bits/stdc++.h>
using namespace std;

void Thap(int n, char dinhdau, char trunggian, char dinhcuoi){
    if(n==1){
        cout << dinhdau << " -> " << dinhcuoi<<endl;
    }
    else{
        Thap(n-1,dinhdau,dinhcuoi,trunggian);
        Thap(1,dinhdau,trunggian,dinhcuoi);
        Thap(n-1,trunggian,dinhdau,dinhcuoi);
    }
}

int main(){
    int n; cin >> n;
    Thap(n,'A','B','C');
}