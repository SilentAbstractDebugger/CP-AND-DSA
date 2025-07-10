#include <bits/stdc++.h>
using namespace std;



//this apporach is the one,i tried with, but it is causing mle
// class Solution {
// public:

//     int bintonum(string s){
//         int n = s.length();
//         int ans = 0;
//         int fac = 1;
//         for(int i=n-1;i>=0;i--){
//             ans = ans + (s[i] - '0') * fac;
//             fac*=2;
//         }return ans;
//     }

//     int getSum(int x, int y) {
//         int c = 0;
//         int ai,bi;
//         unsigned int a=x , b=y;
//         string ans = "";
//         while(a || b ||c){
//             ai = a&1;
//             bi = b&1;
            
//             int sum = ai^bi^c;
//             ans = char(sum+'0') + ans;
//             c = (ai&bi) | (ai&c) | (bi&c);

//             a = a>>1;
//             b = b>>1;
//         }

//         return (bintonum(ans));
//     }
// };



class Solution {
public:
    int getSum(int a, int b) {

        while(b!=0){

            int carry = (unsigned int)((a & b) << 1);
            a = a^b;
            b = carry;
        }
        return a;
    }
};