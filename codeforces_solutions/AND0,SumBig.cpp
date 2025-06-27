#include <bits/stdc++.h>
using namespace std;

long long int mod = 1e9 + 7;

long long int power(int n,int k){
    if(k == 0){
        return 1;
    }
    long long int ans=0;
    long long int p = power(n,k/2) % mod;

    if(k % 2 == 0){
        ans = (p*p)%mod;
    }else{
        ans = (((n % mod)*p) % mod *p) % mod;
    }
    return ans;
}

void solve(){
    int n,k;
    cin>>n>>k;
    
    cout<<power(n,k)<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;

}