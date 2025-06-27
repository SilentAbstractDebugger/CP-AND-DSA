#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int count=0;
        int ans=n;
        while(n){
            ans=n-1;
            n=n&(n-1);
            
        }

        cout<<(ans)<<endl;
    }
    return 0;

}