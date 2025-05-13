class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& vec) {
         vector<int>ans;
 unordered_set<int>s;
 int acctualSum=0,a,b;
 int n=vec.size();
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         acctualSum+=vec[i][j];
         if(s.find(vec[i][j]) != s.end()){
             a=vec[i][j];
         }
         s.insert(vec[i][j]);
     }
  
 }
 
 int expectedValue= (n*n) * (n*n +1)/2;
 
 //accutalSum=expectedSum+a-b
 
 b=expectedValue+a-acctualSum;
    cout<<b<<endl;

    ans.push_back(a);
     ans.push_back(b);


    return ans;
        
    }
};