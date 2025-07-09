#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int first = 1;
        int second = 2;
        if(n==1){return first;}
        if(n==2){
            return second;
        }
        int next = second;
        for(int i=3;i<=n;i++){
            next = first+second;
            first = second;
            second = next;
        }
        return next;
    }
};