#include <iostream>
#include <vector>
#include <numeric>  // for accumulate

using namespace std;

void solve(){
    int n, k, x;
    cin>>n>>k>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(accumulate(a.begin(),a.end(), 0LL) * k < x){
        cout<<"0\n";
        return;
    }
    int l = 1, r = n*k;
    while(l<=r){
        int m = l+(r-l)/2;
        int cnta = (n*k-m + 1)/n;
        int suff = (n*k-m + 1)%n;
        long long int sum = cnta * accumulate(a.begin(), a.end(), 0LL);
        for(int i=n-suff; i<n; i++){
            sum += a[i];
        }
        if(sum < x){
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    cout<<r<<'\n';

//     vector<long long int>ans(n*k+1, 0);
//     for(int i=0;i<n*k;i++){
//         ans[i+1] = ans[i] + a[i%n];
//     }
//     if (ans.back() < x) {
//     cout << "0\n";
//     return;
// }

//     int i = 0;
//     int j = 0;
//     int count = 0;
//     // while(i<n*k && j<n*k){
//     //     if(sum(ans,i,j) >= x){
//     //         count++;
//     //         i++;
//     //         j=i;
//     //     }
//     //     else j++;
//     // }
//     for(int i=0; i<total; i++){
//         j = max(i,j);
//         while(j<total && sum(ans, i, j) < x){
//             j++;
//         }
//         if(j<total && j>=i){count++;}
//     }
//     cout<<count<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
