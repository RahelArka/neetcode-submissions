class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        vector<int> res;
        for (int j = 0; j < k; j++) {
            int best = 0;
            int bestCount = 0;
            for (auto& p : m) {
                if (p.second > bestCount) {
                    best = p.first;
                    bestCount = p.second;
                }
            }
            res.push_back(best);
            m.erase(best);
}
return res;
    }
};
