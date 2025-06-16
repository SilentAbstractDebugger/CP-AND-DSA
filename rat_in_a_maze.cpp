// rat in a maze solution

#include <bits/stdc++.h>
using namespace std;
bool issafe(int x,int y,int n,vector<vector<int>>& m,vector<vector<int>>& visited){
    if(x>=0 && y>=0 && x<n && y<n && m[x][y] == 1 && visited[x][y] == 0){
        return true;
    }
    return false;
}


void solve(int x,int y,vector<vector<int>>& visited,int n,string path, vector<vector<int>>& m,vector<string> & ans){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return ;
    }

    int dx[] = {-1,0,0,1};
    int dy[] = {0,-1,1,0};
    char dir[] = {'U','L','R','D'};

    for(int i=0;i<4;i++){
        int nx= x+dx[i];
        int ny = y+dy[i];
        if(issafe(nx,ny,n,m,visited)){
            visited[x][y] = 1;
            solve(nx,ny,visited,n,path+dir[i],m,ans);
            visited[x][y] = 0; // backtrack

           
        }
    }
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> m(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    vector<vector<int>> visited(n,vector<int>(n,0));
    vector<string> ans;
    string path="";
    if(m[0][0] ==1 ){
        solve(0,0,visited,n,path,m,ans);
    }
    for (string &p : ans) {
        cout << p << endl;
    }
    return 0;
}