#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length();
        int m = b.length();
        string ans = "";
        int i=n-1 , j=m-1;
        int c = 0;
        int ai,bj;
        
        while(i>=0 || j>=0 || c){
           
            if(i>=0){ai= a[i]-'0';}else{ai = 0;}
            if(j>=0){bj= b[j]-'0';}else{bj = 0;}
            int sum = ai^bj^c;
           c = (ai & bj) | (ai & c) | (bj & c);
            ans = char(sum + '0') + ans;
            i--;j--;
            

        }
        return ans;

    }

}; 