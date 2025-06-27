#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int count=0;
    while(x){
        x=x&(x-1);
        count++;
    }
    cout<<count<<endl;
    return 0;
}