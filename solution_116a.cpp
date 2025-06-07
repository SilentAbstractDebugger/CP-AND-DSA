#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans =0;
    int sum =0;
    while(n--){
        int a;int b;
        cin>>a>>b;
        int val = b-a;
        sum = sum+val;
        ans = max(ans,sum);

    }
    cout<<ans<<endl;
    return 0;
}