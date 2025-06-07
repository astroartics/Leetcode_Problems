class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(), false);
        int maxNum = 0;

        for(int i = 0; i < candies.size(); i++)
        {
            maxNum = max(maxNum, candies[i]);
        }

        for(int i = 0; i < candies.size(); i++)
        {
            ans[i] = ((candies[i] + extraCandies) >= maxNum ? true : false);
        }

        return ans;
    }
};
