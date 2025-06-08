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
int updateyear(int year){
    year = year+1;
    return year;
}
int main(){
    int y;
    cin>>y;
    int year =y+1;
    vector<int>arr = fill(year);
    while(check(arr) == false){
        year = updateyear(year);
        arr = fill(year);
    }
    
    cout<<year;
    return 0;
}