class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].emplace_back(x);
        }
        vector<vector<string>> ans;
        for (auto x : mp){
            ans.emplace_back(x.second);
        }
        return ans;
    }
};