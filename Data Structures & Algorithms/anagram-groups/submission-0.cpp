class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> hold; 
        vector<vector<string>> res;
        for (int i = i; i < strs.size(); i++){
            string s = strs[i];
            string key = s;
            sort(key.begin(), key.end());

            auto it = hold.find(key);
            if(it != hold.end()){
                res[it->second].push_back(s);
            } else {
                hold[key] = res.size();
                res.push_back({s});
            }
        }
        return res; 
    }
};
