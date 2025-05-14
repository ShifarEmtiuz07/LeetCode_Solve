class Solution {
public:
    int findLow(vector<int>& nums, int mid) {
        int low;
        for (int i = mid; i >= 0; i--) {
            if (mid > 0 && nums[mid] == nums[mid - 1]) {
                low = mid - 1;
                mid--;
            } else {
                low = mid;
                break;
            }
        }
        return low;
    }

    int findHigh(vector<int>& nums, int mid) {
        int high;
        for (int i = mid; i < nums.size(); i++) {
            if (mid + 1 < nums.size() && nums[mid] == nums[mid + 1]) {
                high = mid + 1;
                mid++;
            } else {
                high = mid;
                break;
            }
        }
        return high;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        int low = -1, high = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) {
                low = findLow(nums, mid);
                high = findHigh(nums, mid);
                break;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return {low, high};
    }
};
