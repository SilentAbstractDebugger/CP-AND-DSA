#include <bits/stdc++.h>
using namespace std;

bool possible(long long int k,long long int h,vector<long long int>& arr){
    
    long long int total=0;
    int s=arr.size();
    for(int i=1;i<s;i++){
       long long int diff = arr[i]-arr[i-1];
       total += min(diff,k);
    }
    if(total >= (h-k)){
        return true;
    }return false;
  
}

void solve(){
    long long int n,h;
    cin>>n>>h;
    vector<long long int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long int st=1;
    long long int end=1e18;

    long long int ans = 0;

    while(st<=end){
        long long int mid = st+(end-st)/2;
        if(possible(mid,h,a)){
            ans = mid;
            end = mid-1;
        }else{
            st=mid+1;
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
    return 0;
}