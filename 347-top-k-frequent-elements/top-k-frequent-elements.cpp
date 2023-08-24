class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == nums.size()) return nums;
        vector<int> res;
        unordered_map<int, int> mp;
        for (auto i : nums) mp[i]++;

        priority_queue<pair<int, int>> pq;
        for (auto it = mp.begin(); it != mp.end(); ++it){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > (int)mp.size() - k){
                res.emplace_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};