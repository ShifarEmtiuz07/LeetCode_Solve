class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& v) {
        
        int x=v.size();
        //  vector<vector<int>> v(x, vector<int>(x));
        //       for(int i=0;i<x;i++){
        //     for(int j=0;j<x;j++){
        //         cin>>v[i][j];
        //     }
        // }
        
       
        
          for(int i=0;i<x;i++){
            for(int j=0;j<x/2;j++){
                swap(v[i][j],v[i][x-j-1]);
            }
        }

          for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(v[i][j]==1) v[i][j]=0;
                else v[i][j]=1;
            }
        }
        
        

       
             return v;
    }

    
};