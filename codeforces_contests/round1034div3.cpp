//ans1

// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n;
//     cin>>n;
//     if(n%4 == 0 ){
//         cout<<"Bob"<<endl;
//     }
//     else{
//         cout<<"Alice"<<endl;
//     }
    
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }



//ans2

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n,j,k;
//     cin>>n>>j>>k;
//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     j--;
//     int value = a[j];
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(a[i] > value){
//             count++;
//         }
//     }

//     if(count>k){
//         cout<<"NO"<<endl;
//     }else{
//         cout<<"YES"<<endl;
//     }
// }

// int main()

// {
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// } 



//ans8

// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     while (b) {
//         a %= b;
//         std::swap(a, b);
//     }
//     return a;
// }

// void solve1(vector<int>& a){
//     int i,x;
//     cin>>i>>x;
//     --i;
//     a[i] = x;
//     bool ok = true;
//     for(int i=0;i<a.size();i++){
//         if(a[i]<a[i-1]){
//             cout<<"NO"<<endl;
//             ok = false;
//             break;
//         }
//     }
//     if(ok == true){
//         cout<<"YES"<<endl;
//     }
// }
// void solve2(vector<int>& a,int m){
//     int k;
//     cin>>k;
//     int g = gcd(k,m);
//     vector<int>b(a.begin(),a.end());
//     bool ok = false;
//     for(int i=0;i<a.size() && ok == false;i++){
//         b[i] = b[i]%g;
//         for(int i=1;i<a.size();i++){
//             if(b[i]<b[i-1]){
//                 ok = false;
//                 break;
//             }
//         }ok = true;
//     }

        
        
//     if(ok == true){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }

// }

// void solve(){
//     int n,m,q;
//     cin>>n>>m>>q;

//     vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     while(q--){
//         int b;
//         cin>>b;
//         if(b==1){
//             solve1(a);
//         }else{
//             solve2(a,m);
//         }
//     }
// }

// int main()
// {
//   int t;
//   cin>>t;
//   while(t--){
//     solve();
//   }  
// } 


//ans4

