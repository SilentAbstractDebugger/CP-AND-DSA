#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        long long int ans=0;
        while(n--){
            int a;cin>>a;
            ans=ans|a;
        }
        cout<<ans<<endl;
    }
    
}