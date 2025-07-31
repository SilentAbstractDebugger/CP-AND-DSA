// #include <bits/stdc++.h>
// using namespace std;

// // void solve(){
// //     int n,d;
// //     cin>>n>>d;
   
// //     vector<int>ans{};
// //     ans.push_back(1);
// //     if(d == 0 || d==5) ans.push_back(5);

// //     // n = min(n,7);
// //     // long long int value = n*d;
// //     // if(n%3==0) ans.push_back(3);
// //     // if(n%9==0) ans.push_back(9);

    
// //     if(n>=3 || d%3==0) {ans.push_back(3);}

// //     if(n>=4 || d%9==0) {ans.push_back(9);}
// //     n = min(n,7);
// //     int facts[] = {1, 1, 2, 6, 24, 120, 720, 5040};
   
// //    int s= int(char(d)*facts[n]);
// //    if(s%7 == 0) ans.push_back(7);
// //     sort(ans.begin(), ans.end());
// //     for(int i:ans){
// //         cout<<i<<" ";
// //     }
// //     cout<<endl;
// // }


// void solve(){
//     int n,d;
//     cin>>n>>d;
//     int facts[] = {1, 1, 2, 6, 24, 120, 720, 5040};
//     for(int i=1;i<=9;i=i+2){
//         int fact = facts[i];
//         int s =  int(to_string(d) * facts[n]);

//     }
//     // vector<int> ans{};
//     // ans.push_back(1);
//     // if(d == 0 || d == 5) ans.push_back(5);
//     // if(n >= 3 || d % 3 == 0) ans.push_back(3);
//     // if(n >= 4 || d % 9 == 0) ans.push_back(9);

//     // n = min(n, 7);
//     // int facts[] = {1, 1, 2, 6, 24, 120, 720, 5040};
//     // int cnt = facts[n];

//     // // Simulate number mod 7
//     // int mod = 0;
//     // for (int i = 0; i < cnt; ++i) {
//     //     mod = (mod * 10 + d) % 7;
//     // }
//     // if(mod == 0) ans.push_back(7);

//     // sort(ans.begin(), ans.end());
//     for(int i : ans){
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


