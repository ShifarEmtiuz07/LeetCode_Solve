class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {

            int v = 0;

            v = nums[i];
            mp[v]++;
        }
        for (auto val : mp)
            if (val.second > 1) {
                return val.first;
            }

        return 0;
    }
};