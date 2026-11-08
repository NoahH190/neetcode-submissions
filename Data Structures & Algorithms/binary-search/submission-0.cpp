class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();      // [l, r)
        while (l < r) {
            int m = l + (r - l) / 2;
            if (target < nums[m])      r = m;
            else if (target > nums[m]) l = m + 1;
            else                       return m;
        }
        return -1;
    }
};
