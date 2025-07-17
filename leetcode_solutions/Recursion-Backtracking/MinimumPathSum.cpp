#include <bits/stdc++.h>
using namespace std;

//this code is inefficient, it got tle, it is needed to be solved by dynamic programming
class Solution {
    void solve(vector<int>& ans , int result,int i,int j,vector<vector<int>>& grid,int m,int n){
        if (i >= m || j >= n) return;

        result+=grid[i][j];
        
        if(i == m-1 && j == n-1){
            ans.push_back(result);
            result = 0;
        }
        
        solve(ans,result,i+1,j,grid,m,n);
        solve(ans,result,i,j+1,grid,m,n);
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int result = 0;
        vector<int>ans;
        solve(ans,result,0,0,grid,m,n);
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};


