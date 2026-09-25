class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ggez; 
        for (int i = 0; i < nums.size(); i++){
            ggez[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i]; 
            if(ggez.count(diff) && ggez[diff] != i){
                return {i, ggez[diff]};
            }
        }
        return{};
    }
};
