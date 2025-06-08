<div>
275a
<br>

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arrs(3, vector<int>(3));
    
    for(int i=0;i<3;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arrs[i][0] = a%2;
        arrs[i][1] = b%2;
        arrs[i][2] = c%2;
    }vector<vector<int>>arr(3,vector<int>(3,1));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arrs[i][j] == 1){
                arr[i][j] = arr[i][j]^1;
                if(i-1>=0){arr[i-1][j] = arr[i-1][j]^1;}
                if(j-1 >=0){arr[i][j-1] = arr[i][j-1]^1;}
                if(i+1<3){arr[i+1][j] = arr[i+1][j]^1;}
                if(j+1<3){arr[i][j+1] = arr[i][j+1]^1;}
            }
        }
    }
    for(int i=0;i<3;i++){
        cout<<arr[i][0]<<arr[i][1]<<arr[i][2]<<endl;
        
    }return 0;
}
</div>


<div>
116a
<br>
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
</div>


<div>
271a
<br>
#include <bits/stdc++.h>
using namespace std;
vector<int> fill(int year){
    vector<int>arr;
for(int i=0;i<4;i++){
        int r = year%10;
        year = year/10;
        arr.push_back(r);
    }
    return arr;
}
bool check(vector<int> arr){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i] == arr[j]){
            
                return false;
            }
        }
    }
    return true;
}

int main(){
    int y;
    cin>>y;
    int year =y+1;
    vector<int>arr = fill(year);
    while(check(arr) == false){
        year = year+1;
        arr = fill(year);
    }
    
    cout<<year;
    return 0;
}</div>


<div>
1030a
<br>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    bool hard = false;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            cout<<"hard"<<endl;
            hard = true;
            break;
        }
    }
    if(hard == false){cout<<"easy"<<endl;}
    return 0;
}

</div>


<div>
230b  #not optimized
<br>
#include <bits/stdc++.h>
using namespace std;
bool tprime(int n){
    int count =0;
    int value=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            value = i;
            count++;
        }
    }
    if(count ==1 && value*value == n){
        return true;
    }return false;
}
int main(){
    int n;cin>>n;
    while (n--){
        int a;cin>>a;
        if(tprime(a)){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

</br>

#optimized 




</div>


<div>
118b
<br>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=n-i-1;j>=0;j--){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<< j;
            if(j!=i){
                cout<<" ";
            }
        }
        for(int j = i-1;j>=0;j--){
            cout<<" "<<j;
            
        }
        cout<<endl;
    }
    
    for(int i=n-1;i>=0;i--){
        for(int j=n-i;j>0 ;j--){
            cout<<"  ";
        } 
        for(int j=0;j<=i;j++){
            cout<<j;
            if(j!=i){
                cout<<" ";
            }
        }
        for(int j=i-1;j>=0;j--){
            cout<<" <<j;}
            cout<<endl;
    }
    
} 
</div>

<div>
460a
<br>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int day=0;
    while(n>0){
        day = day+1;
        n = n-1;
        if(day%m==0){
            n = n+1;
        }
    }
    cout<<day<<endl;
}

</div>
