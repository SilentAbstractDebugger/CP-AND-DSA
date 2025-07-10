#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int dis(vector<int>p1){
        int x1 = p1[0];
        int y1 = p1[1];
        

        int dis = (x1)*(x1) + (y1)*(y1);
        return dis;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int , vector<int>>>pairs;
        int n = points.size();
        for(int i=0;i<n;i++){
            pairs.push_back({dis(points[i]) , points[i]});
        }
        vector<vector<int>> ans;
        sort(pairs.begin(),pairs.end());
        for(int i=0;i<k;i++){
            ans.push_back(pairs[i].second);
        }
        return ans;
    }
};

