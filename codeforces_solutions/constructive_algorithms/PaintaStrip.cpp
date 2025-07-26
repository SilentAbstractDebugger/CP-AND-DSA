#include <bits/stdc++.h>
using namespace std;
void solve(){
    
    int n;
    cin>>n;
    int x=1;
    int ans = 1;
    if(n==1) {cout<<1<<endl; return ;}
    while(true){if(n<=x){
        cout<<ans<<endl;
        return;
    }
        ans++;
        x = x*2+2;
    
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}