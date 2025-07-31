#include <bits/stdc++.h>
using namespace std;
bool ispossible(long long int mid, long long int n, long long int p, long long int l, long long int t, long long int c){
    if(mid*l + min(2*mid,c)*t >= p){
        return true;
    }
    return false;
}
void solve(){
    long long int n,p,l,t;
    cin>>n>>p>>l>>t;
    long long int st = 0;
    long long int c = (n+6)/7;
    long long int end = n;
    long long int ans = st;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(ispossible(mid, n,p,l,t, c)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    cout<<n-ans<<endl;
}
int main(){
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}