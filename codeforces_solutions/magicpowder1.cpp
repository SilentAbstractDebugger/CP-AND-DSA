#include <bits/stdc++.h>
using namespace std;

bool possible(int n,vector<int>& a,vector<int>& b,int k){
    int s=a.size();
    long long int total=0;
    for(int i=0;i<s;i++){
        if(1LL * a[i]*n - b[i]  > 0){
            total+= 1LL * a[i]*n - b[i];
            if(total>k){
        return false;
    }
        }

    }

    
    return true;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int st=0;
    int end = 1e6 ;
    
    int ans = 0;
    while(st<=end){
        int mid = st+(end-st)/2;
        
        if(possible(mid,a,b,k)){
            ans = mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }

    cout<<ans<<endl;

}