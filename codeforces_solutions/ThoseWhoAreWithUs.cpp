// // #include <bits/stdc++.h>
// // using namespace std;

// // bool possible(vector<vector<int>> a,int n,int m,int mid){
// //     for(int r=0;r<n;r++){
// //         for(int c=0;c<m;c++){
// //             int maxi = 0;
// //             for(int i=0;i<n;i++){
// //                 for(int j=0;j<m;j++){
// //                     int val = a[i][j];
// //                     if(i==r || j==c){
// //                         val--;
// //                     }
// //                     maxi = max(maxi , val);
                    
// //                 }
// //             }
// //             if(maxi<= mid){
// //                 return true;
// //             }
// //         }
// //     }
// //     return false;
// // }

// // void solve(){
// //     int n,m;
// //     cin>>n>>m;
// //     vector<vector<int>>a(n,vector<int>(m));
// //     int high = 0;

// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<m;j++){
// //             cin>>a[i][j];
// //             high = max(high ,a[i][j]);
// //         }
// //     }
// //     int low=0;
   
// //     int ans = high;
// //     while(low<=high){
// //         int mid = low+(high-low)/2;
// //         if(possible(a,n,m,mid)){
// //             ans = mid;
// //             high = mid-1;
// //         }else{
// //             low = mid+1;
// //         }
// //     }
// //     cout<<ans<<endl;

// // }

// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         solve();
// //     }
// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int  n,m;
//     cin>>n>>m;
//     vector<vector<int>>a(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }


//     int ans = INT_MAX;
//     for(int r=0;r<n;r++){
//         for(int c=0;c<m;c++){
//             int maxi = 0;
//             for(int i=0;i<n;i++){
//                 for(int j=0;j<m;j++){
//                     int val = a[i][j];
//                     if(i==r || j==c){
//                         val--;
//                     }
//                     maxi = max(maxi,val);
//                 }
//             }
//             ans = min(ans,maxi);


//         }
//     }
//     cout<<ans<<endl;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, m;
//     cin >> n >> m;
//      vector<vector<int>> a(n, vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> a[i][j];
//         }
//     }

//     // vector<int>rm(n,0),cm(m,0);
//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<m;j++){
//     //         rm[i] = max(rm[i], a[i][j]);
//     //         cm[j] = max(cm[j], a[i][j]);
//     //     }
//     // }

//     int ans = INT_MAX;
//     for(int r=0;r<n;r++){
//         for(int c=0;c<m;c++){

//             int maxi = 0;

//             for(int i=0;i<n;i++){
//                 for(int j=0;j<m;j++){
//                     int val = a[i][j];
//                     if(i!=r && j!=c) maxi = max(maxi,a[i][j]);
//                     if(i == r || j==c){
//                         val--;
//                         maxi = max(maxi,val);
//                     }
//                 }
//             }

//             ans = min(maxi,ans);

//         }
       
//     }
//     cout<<ans<<endl;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int> (m));
        int mx = 0, cnt_mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] > mx) {
                    mx = a[i][j], cnt_mx = 1;
                } else if (a[i][j] == mx) {
                    cnt_mx++;
                }
            }
        }
        vector<int> r(n), c(m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == mx) {
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (r[i] + c[j] - (a[i][j] == mx) == cnt_mx) {
                    flag = 1;
                }
            }
        }
        cout << mx - flag << '\n';
    }
    return 0;
}
