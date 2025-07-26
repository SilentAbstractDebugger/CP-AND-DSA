#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& sizes) {
        vector<vector<int>>ans;
        int n = sizes.size();
            
            vector<pair<int,int>>pairs;
        for(int i=0;i<n;i++){
            pairs.push_back({sizes[i],i});
        }
        sort(pairs.begin(),pairs.end());
        for(int i=0;i<n;i++){
            int num = pairs[i].first;
            vector<int>result;
            if(i+num>n){return {};}
            for(int j = i;j<num+i;j++){
                result.push_back(pairs[j].second);
            }
            i=i+num-1;
            ans.push_back(result);
        }
        return ans;
    }
};