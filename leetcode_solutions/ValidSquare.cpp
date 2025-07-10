#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int d(vector<int>& p1, vector<int>& p2){
        int x1 = p1[0];
        int y1 = p1[1];
        int x2 = p2[0];
        int y2 = p2[1];

        int dis = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        return dis;
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>>points = {p1,p2,p3,p4};
        vector<int>dis;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                dis.push_back(d(points[i],points[j]));
            }
        }
        sort(dis.begin(),dis.end());
        if( dis[0] > 0 &&
            dis[0] == dis[1] && 
            dis[1] == dis[2] && 
            dis[2] == dis[3] && 
            dis[3] < dis[4] && 
            dis[4] == dis[5]
        )   return true;
        else{
            return false;
        }
    }
};