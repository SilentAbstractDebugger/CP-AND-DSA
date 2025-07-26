//correct answer but got the tle in this

// #include <bits/stdc++.h>
// using namespace std;
// void addchar(string& ans, vector<int>& q, int ques, int n ){
//     int k = q.size();
//     if(k<n-1){ ans = ans+'0'; return;}
//     else if(k==n){
//         ans = ans+'1'; return ;
//     }else if(k==n-1){
//         for(int i=0;i<k;i++){
//             if(q[i] == ques){
//                 ans = ans+'0';
//                 return;
//             }
//         }
//         ans = ans+'1';
//     }
// }
// void solve(){
//     int n,m,k;
//     cin>>n>>m>>k;
//     vector<int>a(m),q(k);
//     for(int i=0;i<m;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<k;i++){
//         cin>>q[i];
//     }
//     string ans = "";
    
//     for(int i=0;i<m;i++){
//         addchar(ans,q, a[i],n);
//     }
//     cout<<ans<<endl;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// return 0;
    
// }


//now, optimised approach 
#include <bits/stdc++.h>
using namespace std;
bool search(vector<int>& q, int ques){
    int st = 0;
    int end = q.size()-1;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(ques == q[mid]){ return true;}
        else if(ques>q[mid]){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return false;
}
 void solve(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m),q(k);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>q[i];
    }
    string ans(m,'0');
   
    if(k==n){
        ans = string(m, '1');
    }
    else if(k==n-1){
        for(int i=0;i<m;i++){
            int ques = a[i];
            if(search(q,ques) == false){
                ans[i] = '1';
            }
        }
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}