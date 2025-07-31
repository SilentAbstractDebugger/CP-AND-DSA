#include <bits/stdc++.h>
using namespace std;
// int noofdis(int i, const string& s){
//     set<char>ans;
//     for(char c:s){
//         ans.insert(c);
//     }
//     return ans.size();
// }
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    map<char,int> func;
    vector<int>distinct(n,0);
    for(int i=0;i<n;i++){
        func[s[i]]++ ;
        if(func[s[i]] == 1){
            count++;
        }
        distinct[i] = count;
    }

    long long int ans = 0;
    for(int i=1;i<=n;i++){
        ans = ans+(distinct[n-i]);
    }
    cout<<ans<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}