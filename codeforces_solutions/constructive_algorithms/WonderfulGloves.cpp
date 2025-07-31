#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>l(n),r(n);
    for(int i=0;i<n;i++) cin>>l[i];
    for(int i=0;i<n;i++) cin>>r[i];
    long long int y = 0;
    vector<int>a(n), b(n);
    for(int i=0;i<n;i++){
        a[i] = max(l[i], r[i]);
        b[i] = min(l[i], r[i]);
        y=y+a[i];
    }
    sort(b.rbegin(), b.rend());
    for(int i=0;i<k-1;i++){
        y+=b[i];
    }
    cout<<y+1<<'\n';


    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}