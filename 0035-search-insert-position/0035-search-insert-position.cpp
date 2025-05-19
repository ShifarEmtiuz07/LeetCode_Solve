class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
 set<int>s;

bool f=false;

 int st=0,en=nums.size()-1;
        int ans=0;
               while(st<=en){
                //cout<<"s"<<st<<" "<<"en"<<en<<endl;
            int m=st+(en-st)/2;
            //cout<<"m"<<m<<endl;
            if(nums[m]>t){
                en=m-1;
            }else if(nums[m]<t){
                st=m+1;
            }else if(nums[m]==t) {
                ans=m;
                f=true;
                break;
            }

        }

        if(!f){
            for(int val:nums){
                s.emplace(val);
            }
             s.emplace(t);


           auto it = s.find(t);

                if (it != s.end()) {

        ans = distance(s.begin(), it);

    }

            //}
        }

        return ans>0?ans:0;
        
    }
};