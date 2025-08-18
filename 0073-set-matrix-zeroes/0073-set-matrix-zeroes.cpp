#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 
    void setZeroes(vector<vector<int>>& m) {
        int row = m.size();
        int col = m[0].size();

        
        // vector<vector<int>> ans = m;

       

        //    for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //       if(m[i][j]==0){
                
        //        for(int x=0;x<r;x++){
        //            for(int y=0;y<c;y++){
                     
        //              ans[i][y]=0;
                 
        //        }
        //         ans[x][j]=0;
                 
        //        }
                 
                 
        //         }
                 
        //       }
        //     }

        
        // m = ans;


        /////////////////brute force/////////////////

    vector<bool>rowAr(row,false);
    vector<bool>colAr(col,false);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(m[i][j]==0){
                rowAr[i]=true;
                colAr[j]=true;
            }
        }
    }

    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(rowAr[i]) m[i][j]=0;
            if(colAr[j]) m[i][j]=0;
        }
    }



    }
};
