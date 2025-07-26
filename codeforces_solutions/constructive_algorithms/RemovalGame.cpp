// #include <bits/stdc++.h>
// using namespace std;
// bool check(vector<int>& a, vector<int>& b,int starta, int startb, int enda, int endb ){
//     if(a[starta] == b[startb]){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// void game(vector<int>& a,vector<int>& b, int starta, int startb, int enda, int endb){
//     if(startb == endb){
//         if(check(a, b, starta , startb, enda, endb)) cout<<"BOB"<<'\n';
//         else cout<<"ALICE"<<'\n';
//         return;
//     }

//     starta += 1;
//     game(a, b, starta, startb+1, enda, endb );
//     game(a,b,starta, startb, enda, endb-1);

//     enda -= 1;
//     game(a, b, starta, startb+1, enda, endb);
//     game(a, b, starta, startb, enda, endb-1);
// }
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>a(n),b(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }
//     game(a, b, 0, n-1, 0, n-1);
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool found = true;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                found = false;
                break;
            }
        }
        bool found2 = true;
        for(int i=0;i<n;i++){
            if(found == false){
                if(a[i] != b[n-1-i]){
                    found2 = false;
                    break;
                }
            }
        }
        if(found==true ||found2 == true){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }

    }
    return 0;
}