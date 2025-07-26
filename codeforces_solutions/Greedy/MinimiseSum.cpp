#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;

    cin>>n;
    vector<int>a(n);

    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        ans += a[0];
        ans += min(a[0],a[1]);

    cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}