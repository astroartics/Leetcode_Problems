class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), current = 1;
        // vector<int> prefix(n, 1);
        // vector<int> suffix(n, 1);
        vector<int> answer(n, 1);
        // prefix[0] = 1;
        // suffix[n-1] = 1;

        // for(int i = 1; i < n; i++)
        // {
        //     prefix[i] = prefix[i-1] * nums[i-1];
        // }
        
        // for(int i = n-2; i >= 0; i--)
        // {
        //     suffix[i] = suffix[i+1] * nums[i+1];
        // }

        // for(int i = 0; i < n; i++)
        // {
        //     answer[i] = prefix[i] * suffix[i];
        // }

        for(int i = 0; i < n; i++)
        {
            answer[i] *= current;
            current *= nums[i];
        }

        current = 1;

        for(int i = n-1; i >= 0; i--)
        {
            answer[i] *= current;
            current *= nums[i];
        }

        return answer;
    }
};
