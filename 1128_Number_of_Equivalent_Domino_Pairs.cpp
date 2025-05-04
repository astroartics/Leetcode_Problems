class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int cnt = 0;
        vector<int> arr(100);

        int expr = 0;

        for(int i = 0; i < dominoes.size(); i++)
        {
            int value = dominoes[i][0] < dominoes[i][1] ? dominoes[i][0]*10 + dominoes[i][1] : dominoes[i][1]*10 + dominoes[i][0];
            cnt += arr[value];
            arr[value]++;
        }  

        return cnt; 
    }
};
