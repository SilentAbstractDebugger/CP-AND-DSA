#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    vector<pair<int,int>>pairs;
    for(int i=0;i<n;i++){
        pairs.push_back({arr[i][0],i});
    }
    sort(pairs.begin(),pairs.end());
    vector<vector<int>>a;
    for(int i=0;i<n;i++){
        a.push_back(arr[pairs[i].second]);
    }
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][i] != count) {cout<<-1<<endl; return;}
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<pairs[i].second + 1<<" ";
    }cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}