#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>h(n+1);
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
   int current = h[k];
   int dist = h[k];

    sort(h.begin(), h.end());
    bool yes = true;
    
    for(int i=0;i<=n;i++){
        
        if(h[i] >= current){ k = i; break;}
    }

    while(k<=n){
        
        
        if((h[k]- current) > dist){
            cout<<"NO"<<endl;
            return;
        }
        current = h[k];
        k++;
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