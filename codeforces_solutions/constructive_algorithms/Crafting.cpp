#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        c[i] = a[i]-b[i];
    }
    int neg=0;
    int pos=0;
    int zero =0;
    for(int i=0;i<n;i++){
        if(c[i]<0) neg++;
        else if(c[i]>0) pos++;
        else zero++;
    }
    if(neg <1 ) cout<<"YES"<<endl;
    else if(neg == 1 && zero >0){cout<<"NO"<<endl;}
    else if(neg == 1 && zero == 0 ){cout<<"YES"<<endl;}
    else if(neg>1) cout<<"NO"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}