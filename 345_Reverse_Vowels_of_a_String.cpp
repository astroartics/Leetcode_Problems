class Solution {
public:
    string reverseVowels(string s) {
        
        int start = 0, end = s.size() - 1;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        while(start < end)
        {
            while(start < end && find(vowels.begin(), vowels.end(), tolower(s[start])) == vowels.end())
            {
                start++;
            }

            while(start < end && find(vowels.begin(), vowels.end(), tolower(s[end])) == vowels.end())
            {
                end--;
            }

            char tmp = s[start];
            s[start] = s[end];
            s[end] = tmp;

            start++;
            end--;
        }


        // Initial approach
        // string ans = s;
        // vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        // vector<char> vowels_in_str;
        // vector<int> vowel_indices;

        // for(int i = 0; i < s.size(); i++)
        // {
        //     if(find(vowels.begin(), vowels.end(), tolower(s[i])) != vowels.end())
        //     {
        //         vowels_in_str.push_back(s[i]);
        //         vowel_indices.push_back(i);
        //     }
        // }

        // for(int i = 0, j = vowels_in_str.size() - 1; i < vowel_indices.size(); i++)
        // {
        //     ans[vowel_indices[i]] = vowels_in_str[j--];
        // }

        return s;
    }
};
