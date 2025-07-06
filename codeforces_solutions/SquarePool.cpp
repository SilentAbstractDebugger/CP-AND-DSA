#include <bits/stdc++.h>
using namespace std;

bool potted(int dx,int dy,int x,int y,int s){
   if ((x == y || x + y == s)) {
        if (x == y && dx == 1 && dy == 1) return true;
        if (x == y && dx == -1 && dy == -1) return true;
        if (x + y == s && dx == 1 && dy == -1) return true;
        if (x + y == s && dx == -1 && dy == 1) return true;
    }
    return false;
}

void solve(){
    int n,s;
    cin>>n>>s;
    int count = 0;
    while(n--){
        int dx,dy,x,y;
        cin>>dx>>dy>>x>>y;
        if(potted(dx,dy,x,y,s)){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}