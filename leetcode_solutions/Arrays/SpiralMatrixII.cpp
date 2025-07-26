#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int sr=0,sc=0,er=n-1,ec=n-1,num = 1;
        vector<vector<int>> ans(n,vector<int>(n));
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec;i++){
                ans[sr][i] = num;
                num++;
            }sr++;
            for(int i=sr;i<=er;i++){
                ans[i][ec] = num;
                num++;
            }ec--;
            for(int i=ec;i>=sc;i--){
                ans[er][i] = num;
                num++;
            }er--;
            for(int i=er;i>=sr;i--){
                ans[i][sc] = num;
                num++;
            }sc++;
        }
        return ans;
    }
};