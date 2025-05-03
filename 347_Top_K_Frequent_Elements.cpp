class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int,int>> pq;

        for(auto e : nums)
            mp[e]++;

        nums.clear();

        for(auto e : mp)
        {
            pq.push({e.second, e.first});
        }

        while(k != 0)
        {
            nums.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return nums;
    }
};
