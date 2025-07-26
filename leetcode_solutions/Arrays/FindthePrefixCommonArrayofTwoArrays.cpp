#include <bits/stdc++.h>
using namespace std;
class Solution {
    int common(vector<int>& a,vector<int>& b, int i){
        int count=0;
        for(int j=0;j<=i;j++){
            int c = a[j];
            
            for(int k=0;k<=i;k++){
                if(c==b[k]){
                    count++;
                }
            }
        }
        return count;
    }
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int>c(n,0);
        for(int i=0;i<n;i++){
            c[i] = common(a,b,i);
        }
        return c;
    }
};