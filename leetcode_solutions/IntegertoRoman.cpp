#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        
        string ans ="";
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        

        int ro = num%10;
        int rt = (num%100)/10;
        int rh = (num%1000)/100;
        int rth = (num/1000);

        ans = ths[rth] + hrns[rh] + tens[rt] + ones[ro];
        return ans;
    }
};