#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long int ans = 0;
    long long int maxi=INT_MIN;
    vector<long long int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    for(int i=0;i<n;i++){
        ans = ans + (maxi ^ a[i]);
    }
    cout<<ans<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}