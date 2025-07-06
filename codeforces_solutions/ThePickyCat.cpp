#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>>pairs(n);
    for(int i=0;i<n;i++){
        pairs[i] = {abs(a[i]) , i};
    }
    sort(pairs.begin(),pairs.end());
    vector<int>ans(n);
    for(int i =0;i<n/2+1;i++){
        int value = pairs[i].second;
        ans[value] = 1;
    }
    if(ans[0] == 1){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
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