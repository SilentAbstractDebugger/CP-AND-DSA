//substrings printing for a string

// #include <bits/stdc++.h>
// using namespace std;
// void solve(string& s , int index,string output , vector<string> & ans){
//     if(index == s.length()){
//         ans.push_back(output);
//         return ;
//     }
    
//     //exclusive
    
//     solve(s,index+1,output,ans);
    
//     //inclusive
    
//     output.push_back(s[index]);
//     solve(s,index+1,output,ans);
// }
// int main(){
//     string s = "abc";
//     vector<string>ans;
//     string output = "";
//     solve(s,0,output,ans);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }
// }




//subsets printing for a vector

// #include <bits/stdc++.h>
// using namespace std;
// void solve(vector<int>& nums , int index,vector<int> output , vector<vector<int>> & ans){
//     if(index == nums.size()){
//         ans.push_back(output);
//         return ;
//     }
    
//     //exclusive
    
//     solve(nums,index+1,output,ans);
    
//     //inclusive
    
//     output.push_back(nums[index]);
//     solve(nums,index+1,output,ans);
// }
// int main(){
//     vector<int> nums = {1,2,3}
//     vector<vector<int>>ans;
//     vector<int>output;
//     solve(nums,0,output,ans);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }
// }



