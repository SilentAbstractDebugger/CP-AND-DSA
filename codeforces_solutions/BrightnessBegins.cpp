#include <bits/stdc++.h>
using namespace std;

bool possible(long long int n,long long int k){
    

    //this method is fine but this is using too much memory which uses a lot of ram 
    // vector<int>bulbs(n+1,1);
    // bulbs[0] = 0;
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j<=n;j = j+i){
    //         bulbs[i] ^= 1;
    //     }
    // }
    // long long int count=0;

    // for(int i=0;i<=n;i++){
    //     if(bulbs[i] == 1){
    //         count++;
    //     }
    // }
    // if(count >= k){
    //     return true;
    // }return false;

if(n - int(sqrtl(n)) >= k){
    return true;
}return false;

}

void solve(){
    long long int k;
    cin>>k;
    long long int low = 1;
    long long int high = 2e18;
    long long int ans = high;
    while(low <= high){
        long long int mid = low+(high-low)/2;
        if(possible(mid , k)){
        ans = mid;
        high = mid-1;
    }else{
        low = mid+1;
    }
    
}
cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}