#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;cin>>m;
    while(m--){
        string s;
        cin>>s;
        bool yes = true;
        if(s.length() != n){yes=false;}
        if (!yes) {
            cout << "NO" << endl;
            continue; 
        }
        vector<pair<int,char>>pairs1(n),pairs2(n);
        for(int i=0;i<n;i++){
            pairs1[i] = {a[i],s[i]};
            pairs2[i] = {s[i],a[i]};
        }
        sort(pairs1.begin(),pairs1.end());
        for(int i=0;i<n-1;i++){
            if(pairs1[i].first == pairs1[i+1].first){
                if(pairs1[i].second != pairs1[i+1].second){
                    yes=false;
                    break;
                }
            }
        }
        sort(pairs2.begin(),pairs2.end());
        for(int i=0;i<n-1;i++){
            if(pairs2[i].first == pairs2[i+1].first){
                if(pairs2[i].second != pairs2[i+1].second){
                    yes=false;
                    break;
                }
            }
        }
        if(yes == true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
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