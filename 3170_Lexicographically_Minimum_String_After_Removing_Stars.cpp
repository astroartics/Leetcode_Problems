class Solution {
public:
    string clearStars(string s) {
        priority_queue<char, vector<char>, greater<char>> min_heap;
        unordered_map<char, vector<int>> hash_map;
        vector<bool> isValidChar(s.size(), true);
        string ans = "";

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '*')
            {
                char min_char = min_heap.top();
                min_heap.pop();

                int lastSmallest = hash_map[min_char].back();
                hash_map[min_char].pop_back();

                isValidChar[lastSmallest] = false;
                isValidChar[i] = false;
            }else
                {
                    min_heap.push(s[i]);
                    hash_map[s[i]].push_back(i);
                }
        }

        for(int i = 0; i < isValidChar.size(); i++)
        {
            if(isValidChar[i])
            {
                ans += s[i];
            }
        }

        return ans;
    }
};
