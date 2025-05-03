class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        int m = grid.size(), n = grid[0].size(), ans = 0;
        vector<priority_queue<int>> v(m);

        for(int i = 0; i < m; i++)
        {
            for(auto row : grid[i])
            {
                v[i].push(row);
            }
        }

        while(n >= 1)
        {
            int maxNum = 0;
            for(int i = 0; i < v.size(); i++)
            {
                maxNum = max(maxNum, v[i].top());
                v[i].pop();
            }
            n--;
            ans += maxNum;
        }

        return ans;
    }
};
