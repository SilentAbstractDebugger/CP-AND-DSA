#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string a1="",b1="",a2="",b2="";
        int n = num1.length();
        int m = num2.length();
        int i=0;
        int j,k;
        while(num1[i] != '+'){
            a1 = a1+num1[i];
            i++;
            j=i;
        }
        i=0;
        while(num2[i] != '+'){
            a2 = a2+num2[i];
            i++;
            k=i;
        }

        for(int i=j+1;i<n;i++){
            if(num1[i] == 'i') break;
            b1 = b1+num1[i];
        }
        for(int i=k+1;i<m;i++){
            if(num2[i] == 'i') break;
            b2 = b2+num2[i];
        }

        int a = stoi(a1),b = stoi(b1),c = stoi(a2),d = stoi(b2);
        int ip = a*c - (b*d);
        int cp = a*d + b*c; 
        
        string iz = to_string(ip);
        string cz = to_string(cp);

        string ans = iz + "+" + cz + "i";
        return ans;

        
    }
};