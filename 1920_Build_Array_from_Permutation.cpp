class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {        
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] += 1002 * (nums[nums[i]] % 1002);
        }

        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] / 1002;
        }

        return nums;
    }
};
