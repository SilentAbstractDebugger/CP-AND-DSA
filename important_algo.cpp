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

// #include <bits/stdc++.h> 
// using namespace std;
// void solve(string& s,vector<string>& ans){
//     int n = s.length();
//     int total = 1<<n;
//     for(int mask=0;mask<total;mask++){
//         string arr;
//         for(int i=0;i<n;i++){
//             if((mask>>i )&1){
//                 arr.push_back(s[i]);
//             }
//         }
//         ans.push_back(arr);
       
//     }
       
// }

// int main(){
//    string s = "abc";
//     vector<string>ans;
//     solve(s,ans);
//    for(string i:ans){
//        cout<<i<<endl;
//    }
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

// #include <bits/stdc++.h> 
// using namespace std;
// void solve(vector<int>& nums,vector<vector<int>>& ans){
//     int n= nums.size();
//     int total = 1<<n;
//     for(int mask=0;mask<total;mask++){
//         vector<int>arr;
//         for(int i=0;i<n;i++){
//             if((mask>>i )&1){
//                 arr.push_back(nums[i]);
//             }
//         }
//         ans.push_back(arr);
//         arr.clear();
//     }
       
// }

// int main(){
//     vector<int> nums = {1,2,3};
//     vector<vector<int>>ans;
//     solve(nums,ans);
//    for (vector<int> i : ans) {
//         for (int val : i) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// }




//permutations of a string
// void solve(string & s,vector<string>& ans,int index){
//     if(index>=s.length()){
//         ans.push_back(s);
//         return ;
//     }
//     for(int i=index;i<s.length();i++){
//         swap(s[i],s[index]);
//         solve(s,ans,index+1);
        
//         //backtracking
//         swap(s[i],s[index]);
//     }
// }

// int main(){
//     string s;
//     cin>>s;
//     vector<string>ans;
//     solve(s,ans,0);
//     for(string i:ans){
//         cout<<i<<endl;
//     }
// }
