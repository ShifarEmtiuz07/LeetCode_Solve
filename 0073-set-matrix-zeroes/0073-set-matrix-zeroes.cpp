#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 
    void setZeroes(vector<vector<int>>& m) {
        int r = m.size();
        int c = m[0].size();

        
        vector<vector<int>> ans = m;

       

           for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
              if(m[i][j]==0){
                
               for(int x=0;x<r;x++){
                   for(int y=0;y<c;y++){
                     
                     ans[i][y]=0;
                 
               }
                ans[x][j]=0;
                 
               }
                 
                 
                }
                 
              }
            }

        
        m = ans;
    }
};
