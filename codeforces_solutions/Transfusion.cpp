#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum1=0, sum2=0, sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0) sum1+=a[i];
        else sum2+=a[i];
        sum+=a[i];
    }

    if(sum % n == 0){
    // compute average
    sum = sum / n;
    int odd = (n + 1) / 2;
    int even = n - odd;
    if (sum * odd == sum1 && sum * even == sum2){
        cout << "YES\n";
        return;
    } else {
        cout << "NO\n";
        return;
    }
} else {
    cout << "NO\n";
    return;
}

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}