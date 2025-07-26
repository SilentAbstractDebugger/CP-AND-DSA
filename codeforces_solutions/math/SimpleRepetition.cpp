#include <bits/stdc++.h>
using namespace std;
bool isprime(long long int n){
    if(n<=1){return false;}
    for(long long int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int x,k;
    cin>>x>>k;
    if(k==1){ 
        if(isprime(x) == true){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    else if(k>1 && x>1){cout<<"NO"<<endl;}
    else{
        if(k==2){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }return 0;
}