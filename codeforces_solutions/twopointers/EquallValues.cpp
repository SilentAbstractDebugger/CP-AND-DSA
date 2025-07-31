// #include <bits/stdc++.h>
// using namespace std;
// // int first_index(int x, vector<int>& a){
// //     for(int i=0;i<a.size();i++){
// //         if(a[i] == x) return i;
// //     }
// //     return 0;
// // }

// // int last_index(int x, vector<int>& a){
// //     for(int i=a.size()-1;i>=0;i--){
// //         if(a[i] == x) return i;
// //     }
// //     return 0;
// // }
// void solve(){
//     int n;cin>>n;
//     vector<int>a(n);
//     unordered_map<int, pair<int,int>> index;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         if(index.find(a[i]) == index.end()){
//             index[a[i]].first = i;  //store the first index;
//         }
//         index[a[i]].second = i; //updating the last index;
//     }
    
//     int mincost = INT_MAX;
//     for(auto& i:index){
//         int x = i.first;
//         int fi = i.second.first;
//         int li = i.second.second;

//         int lc = fi*x;
//         int rc = (n-1-li)*x;
//         int total = lc+rc;
//         mincost = min(mincost, total);        
//     }
//     cout<<mincost<<'\n';
//     return;
// }
// int main(){
//      ios::sync_with_stdio(false);
//     cin.tie(0); // disables unnecessary flushing
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
long long int calprice(long long int i, long long int j, vector<int>& a){
    long long int n= a.size();
    long long int b = (i)*a[i];
    long long int c = (n-j-1)*a[j];
    return b+c;
}
void solve(){
    long long int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long int minprice= LLONG_MAX;
    long long int i=0;
    long long int j=0;
    while(j<n) {
        if(j<n-1 && a[i] == a[j+1]){
            j++;
            continue;
        }
        long long int price = calprice(i, j, a);
        minprice = min(minprice, price);
        j++;
        i=j;
    }
    cout<<minprice<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}