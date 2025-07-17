#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool dfs(vector<vector<char>>& board,string& word, int i,int j,int m,int n,int index){
        if(word.size() == index) return true;
        if(i<0 || j<0 || i>=m || j>=n) return false;
        if (board[i][j] != word[index]) return false; // <-- IMPORTANT
        

        char c = board[i][j];
        board[i][j] = '#';
        bool found = dfs(board , word,i+1,j,m,n,index+1) ||
                     dfs(board, word, i - 1, j,m,n, index + 1) ||
                     dfs(board, word, i, j + 1,m,n, index + 1) ||
                     dfs(board, word, i, j - 1,m,n, index + 1);

        board[i][j] = c;
        return found;

    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        int index = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(board,word,i,j,m,n,index)) return true;
            }
        }
        return false;
    }
};