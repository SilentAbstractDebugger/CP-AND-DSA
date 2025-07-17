#include <bits/stdc++.h>
using namespace std;
class Solution {
    int o(vector<int>& arr){
        int ans = 0;
        for(int i:arr){
            ans = ans|i;
        }
        return ans;
    }
    void solve(int i,vector<int>& nums,vector<vector<int>>& ans,vector<int> result){
        int n = nums.size();
        if(i == n) {ans.push_back(result); return;}

        //exclude 
        solve(i+1,nums,ans,result);

        //include 
        result.push_back(nums[i]);
        solve(i+1,nums,ans,result);
    }
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>result;
        solve(0,nums,ans,result);
        vector<int> aor;
        int count = 1;
        int m = ans.size();
        for(int i=0;i<m;i++){
            aor.push_back(o(ans[i]));
        }
        sort(aor.begin(),aor.end());
        for(int i=aor.size()-2;i>=0;i--){
            if(aor[i] == aor[i+1]) count++;
            else{break;}
        }
        return count;
    }
};