#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n), b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int sum = 0;
    int maxi=0;
    int ans = 0;
    for(int i=0;i<min(n,k);i++){
        sum+=a[i];
        maxi = max(maxi, b[i]);
        ans = max(ans, sum + (k-1-i)*maxi);
    }
    cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}