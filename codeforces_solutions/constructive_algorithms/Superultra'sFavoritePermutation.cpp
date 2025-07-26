#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a,b;
    for(int i=1;i<=n;i=i+2){
        a.push_back(i);
    }    
    for(int i=2;i<=n;i=i+2){
        b.push_back(i);
    }
    bool found = false;
    for(int i=0;i<b.size();i++){
        int val = a.back() + b[i];
        if(isprime(val) == false){
            found = true;
            swap(b[0],b[i]);
            break;
        }
    }
    for(int i=0;i<b.size();i++){
        a.push_back(b[i]);
    }
    if(found == true){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }cout<<'\n';
    }else{
        cout<<-1<<'\n';
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}