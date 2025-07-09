#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    int lambda = n/p;
    int remain = n%p;
    if(remain == 0 && lambda*q != m){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}