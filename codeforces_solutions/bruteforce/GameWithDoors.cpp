#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
//1
    if(a==c && b==d){
        cout<<(b-a)<<endl;
    }

//2
    else if(b<c){
        cout<<1<<endl;
    }

//3
    else if(d<a){
        cout<<1<<endl;
    }
    
//4
    else if(c<a && d>b){
        cout<<2+(b-a)<<endl;
    }

//5
    else if(b==c){
        cout<<2<<endl;
    }

//6
    else if(d==a){
        cout<<2<<endl;
    }

//7
    else if(a>c && a<d && b>d){
        cout<<2+(d-a)<<endl;
    }
    
//8
    else if(a<c && b<d && b>c){
        cout<<2+(b-c)<<endl;
    }

//9
    else if(a==c && b>d){
        cout<<1+(d-c)<<endl;
    }

//10
    else if(a==c && d>b){
        cout<<1+(b-a)<<endl;
    }
    
//11
    else if(b==d && c<a){
        cout<<1+(b-a)<<endl;
    }

//12
    else if(b==d && a<c){
        cout<<1+(d-c)<<endl;
    }

//13
    else if(a<c && b>d){
        cout<<2+(d-c)<<endl;
    }


   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }return 0;
}