#include <bits/stdc++.h>
using namespace std;
class Solution {
    void solve(int n, string output, vector<string>& ans){
        if(output.length()==n){ans.push_back(output); return;}
      
        solve(n,output+'1',ans);
        
        if(output.empty() || output.back()!='0'){
            solve(n,output+'0',ans);
        }

    }
public:
    vector<string> validStrings(int n) {
        vector<string>ans;
        string output="";
        solve(n,output,ans);
        return ans;
    }
};