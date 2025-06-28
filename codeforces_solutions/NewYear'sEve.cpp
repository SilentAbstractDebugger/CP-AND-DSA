#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int ans=1;
    if(k==1){
        cout<<n<<endl;
    }else{
        while(ans<n){
            ans = ans * 2;
            ans = ans + 1;
        }
        cout<<ans<<endl;
    }
    return 0;//hello made a change here for the 
}