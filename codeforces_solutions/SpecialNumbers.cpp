#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int ans=0;
        long long int fac=1;
        while(k>0){
            
            int r=k%2;
            k=k/2;
            ans = (ans + 1LL * r * fac) % mod;

            fac=(fac*n*1LL) % mod ;

        }

        cout<<ans%mod<<endl;
    }
}