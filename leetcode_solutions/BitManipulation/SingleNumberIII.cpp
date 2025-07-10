#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==2) return nums;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int count = 0;
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1] && count == 0){
                ans.push_back(nums[i-1]);
            }
            if(nums[i] == nums[i-1]) count++;
            else count = 0;

            
        }
        if(ans.size() != 2) ans.push_back(nums[n-1]);
        return ans;
    }
};