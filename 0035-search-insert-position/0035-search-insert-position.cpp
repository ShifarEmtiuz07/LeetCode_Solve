class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
 int st=0,en=nums.size()-1;
      
               while(st<=en){
                //cout<<"s"<<st<<" "<<"en"<<en<<endl;
            int m=st+(en-st)/2;
            //cout<<"m"<<m<<endl;
            if(nums[m]>t){
                en=m-1;
            }else if(nums[m]<t){
                st=m+1;
            }else if(nums[m]==t) {
               return m;
            }

        }

        return st;
        
    }
};