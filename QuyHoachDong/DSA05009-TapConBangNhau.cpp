#include <iostream> 
using namespace std; 

int a[101],x[101],n,sum;long  s; 
bool ok=false; 

bool Try(int i){ 
    for(int j=0;j<=1;j++){ 
        a[i]=j; 
        sum+=a[i]*x[i]; 
        if(sum == s/2 && s%2 == 0){ 
            ok = true; 
            return 0; 
        } 
        if(sum <= s/2) Try(i+1); 
        sum-=a[i]*x[i]; 
    } 
} 

int main(){ 
    int t; cin>>t; 
    while(t--){ 
        s=0; ok=false; 
        cin>>n; 
        for(int i=1;i<=n;i++){ 
            cin>>x[i]; s+=x[i]; 
        } 
        if(s%2 == 1) cout<<"NO"<<endl; 
        else{ 
            Try(1); 
            if(ok == true) cout<<"YES"<<endl; 
            else cout<<"NO"<<endl; 
        }
    } 
}