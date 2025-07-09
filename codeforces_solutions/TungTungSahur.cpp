#include <bits/stdc++.h>
using namespace std;

void solve(){
    string p;
    cin>>p;
    int n = p.length();
    string s;
    cin>>s;
    int m = s.length();
    if(m<n || m>2*n || p[0]!=s[0]){
        cout<<"NO"<<endl;
        return;
    }
    vector<int>pc,sc;
    int count=1;
    for(int i=1;i<n;i++){
        if(p[i]!=p[i-1]){
            pc.push_back(count);
            count = 1;
        }else{
            count++;
        }
    }
    pc.push_back(count);
    count=1;
    for(int i=1;i<m;i++){
        if(s[i]!=s[i-1]){
            sc.push_back(count);
            count=1;
        }else{
            count++;
        }
    }
    sc.push_back(count);
    if(pc.size() != sc.size()){
        cout<<"NO"<<endl;
        return ;
    }
    for(int i=0;i<pc.size();i++){
        if(sc[i] < pc[i] || sc[i] > 2*pc[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
   cout<<"YES"<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}