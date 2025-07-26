#include <bits/stdc++.h>
using namespace std;

void reverse(string& s, int l,int r){
    for(int i=l;i<=(r-l)/2;i++) {
        swap(s[i],s[r-i]);
    }
}

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int count = 1;
    if(s[0] == '1')  count++;
    for(int i=0;i<n-1;i++){
        if(s[i] != s[i+1]) count++;
        count++;
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}