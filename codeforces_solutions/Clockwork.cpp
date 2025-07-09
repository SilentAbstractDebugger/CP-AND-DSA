#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int maxi = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
        sum = sum+a[i];
    }
    if(2*maxi > sum){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

}

int main(){
 int t;
 cin>>t;
 while(t--){
    solve();
 }   
}