class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> heap;
        // vector<int> ans;

        for(auto e : nums)
        {
            heap.push(e);
        }

        nums.clear();

        while(heap.size() > 0)
        {
            int a = heap.top();
            heap.pop();
            int b = heap.top();
            heap.pop();
            nums.push_back(b);
            nums.push_back(a);
        }

        return nums;
    }
};
