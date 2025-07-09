
//tried but this is not proper solution, it requires some modification

// #include <bits/stdc++.h>
// using namespace std;
// vector<string>ans;
// string s;
// void solve(char a,vector<vector<char>>& abc, string s,int x,int y){
//     if(s.length() == 3){
//         ans.push_back(s);
//         s="";
//         return ;
//     }
//     if(x-1 >=0 && x+1<3 && y-1>=0 && y+1<3){
        
//         char minchar = 'A';
//         s.push_back(abc[x][y]);
//         for(int i = x-1;i<=x+1;i++){
//             for(int j=y-1;j<=y+1;j++){
//                 minchar = min(minchar,abc[i][j]);

//             }
//         }
//         s.push_back(minchar);
//     }
// }
// int main(){
//     vector<vector<char>>abc(3,vector<char>(3));
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>abc[i][j];
//         }
//     }

   
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             char a = abc[i][j];
//             solve(a,abc,s,i,j);
//         }
//     }


// }






#include <bits/stdc++.h>
using namespace std;

bool isad(int r1,int c1,int r2,int c2){
    if(abs(r1-r2) <= 1 && abs(c1-c2) <= 1 && !(r1==r2 && c1==c2)){
        return true;
    }return false;
}

int main(){
    vector<vector<char>> grid(3, vector<char>(3));
    for (auto& row : grid)
        for (char& ch : row)
            cin >> ch;

    string ans="~~~";
    for(int r1=0;r1<3;r1++){
        for(int c1=0;c1<3;c1++){
            for(int r2=0;r2<3;r2++){
                for (int c2 = 0; c2 < 3; c2++){
                    for(int r3=0;r3<3;r3++){
                        for(int c3=0;c3<3;c3++){
                            if((r1!=r2 || c1!=c2) && (r2 != r3 || c2 != c3) &&
            (r1 != r3 || c1 != c3)){

                if(isad(r1,c1,r2,c2) && isad(r2,c2,r3,c3)){
                    string word;
                    word+=grid[r1][c1];
                    word+=grid[r2][c2];
                    word+=grid[r3][c3];

                    ans = min(ans,word);
                }
            }
                        }
                    }
                }

            }
        }
    }
    cout<<ans<<endl;
}