#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFreeTime(int time, vector<int>& st, vector<int>& et) {
        int n = st.size();
        int maxfree = 0;
        vector<int>t;
        t.push_back(st[0]);
        for(int i=0;i<n-1;i++){
            t.push_back(st[i+1]-et[i]);
        }
        t.push_back(time-et[n-1]);
        vector<int>lr(n+1,0);
        for(int i=n-1;i>=0;i--){
            lr[i] = max(lr[i+1],t[i+1]);
        }
        int ll = 0;
        for(int i=1;i<=n;i++){
            int d = et[i-1]-st[i-1];
            bool fitleft = ll >= d;
            bool fitright = lr[i] >= d;

            if(fitleft || fitright){
                int merged = t[i-1]+t[i]+d;
                maxfree = max(maxfree,merged);
            }
            maxfree = max(maxfree,t[i-1] + t[i]);
            ll = max(ll , t[i-1]);
        }
        return maxfree;                  
    }
};