#include<bits/stdc++.h>
using namespace std;

int n,ok,s[100];

bool check()
{
    if(s[1] != 8 || s[n] != 6) return false;
    for(int i = 2 ; i <= n ;i++)
    {
        if(s[i] == 8 && s[i - 1] == 8) return false;
        
        if(i >= 4 && s[i] == 6 && s[i - 1] == 6 && s[i - 2] == 6 && s[i - 3] == 6) return false;
    }
    return true;
}

void ktao(){
	for(int i=1;i<=n;i++) s[i]=6;
}

void Sinh(){
	int i=n;
	while(i>=1 && s[i]==8){
		s[i]=6;
		i--;
	}
	if(i==0) ok=0;
	else{
		s[i]=8;
	}
}
int main(){
	cin >> n;
	ktao();
	ok=1;
	while(ok){
		if(check()){
			for(int i=1;i<=n;i++){
				cout << s[i];
			}
			cout << endl;
		}
		Sinh();
	}
	
}
