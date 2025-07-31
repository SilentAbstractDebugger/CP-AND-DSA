#include <bits/stdc++.h>
using namespace std;
bool issorted(vector<int>& a){
    vector<int>b = a;
    vector<int>c = a;
    sort(b.begin(),b.end());
    sort(c.rbegin(), c.rend());
    if(a==b || a==c) return true;
    else return false;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool found= false;
    for(int i=0;i<n-1;i++){
        if(abs(a[i] - a[i+1])<=1){
            cout<<0<<endl;
            found = true;
            return ;
        }
    }
    if(issorted(a)){cout<<-1<<endl; return;}
    else cout<<1<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve(); 
    }
    return 0;
}