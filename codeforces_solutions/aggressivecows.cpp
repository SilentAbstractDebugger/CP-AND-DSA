#include <bits/stdc++.h>
using namespace std;

bool possible(int dis,vector<int>& arr,int c){
    int n= arr.size();
    int count=1;
    
    int st = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-st >= dis){
            count++;
            st = arr[i];
        }
    }

    if(c > count){
        return false;
    }
    else{
        return true;
    }

}

void solve(){
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int st=1;
    int end = a[n-1]- a[0];
    int ans=1;

    while(st<=end){
        int mid= st+(end-st)/2;

        if(possible(mid , a , c)){
            ans = mid;
            st =mid+1;
        }else{
            end = mid-1;
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