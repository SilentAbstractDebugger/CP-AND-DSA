#include <bits/stdc++.h>
using namespace std;
int f(int a,int b){
    if(a>b) return 1;
    else if(a==b) return 0;
    else return -1;
}
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int count= 0;
    if(f(a,c) + f(b,d) > 0) count++;
    if(f(a,d) + f(b,c) > 0) count++;
    if(f(b,c) + f(a,d) > 0) count++;
    if(f(b,d) + f(a,c) > 0) count++;

    cout<<count<<'\n';

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}