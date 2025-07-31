#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n), x(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>x[i];
    }
    // for(int i=0;i<q;i++){
    //     for(int j=0;j<n;j++){
    //         int value = 1<<x[i];
    //         if(a[j] % value == 0) {
    //             a[j] += 1<<(x[i]-1);
    //         }
    //     }
    // }

    int xmin = 31;
    for(int i=0;i<q;i++){
        if(x[i]<xmin){
            xmin = x[i];
            int value = 1<<x[i];
            for(int j=0;j<n;j++){
                if(a[j]%value == 0){
                    a[j] += 1<<(x[i]-1);
                }
            }
            
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}