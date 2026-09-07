class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for(int i = 0; i <= n; i++){
            int req = 0; 
            for(int j = 0; j < 32; j++){
                req += (i >> j) & 1; 
            }
            ans[i] = req;
        }
        return ans; 
    }
};
