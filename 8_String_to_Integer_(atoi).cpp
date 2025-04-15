class Solution {
public:
    // int myAtoi(string s) {
    //     stringstream ss;
    //     int i;
    //     ss << s;
    //     ss >> i;
    //     return i;
    // }

    // Implementation of the above code
    int myAtoi(string s) {

        long int ans = 0, i = 0, sign = 0, digitFound = 0;

        while(i < s.size())
        {
            while(isspace(s[i]))
            {
                i++;
            }

            if(s[i]=='-')
            {
                sign = 1;
                i++;
            }else if(s[i]=='+')
                {
                    sign = 0;
                    i++;
                }

            if(isdigit(s[i]))
            {
                ans = ans * 10 + (s[i] - '0');

                if(ans > INT_MAX && sign == 0)
                    return INT_MAX;
                else if(-ans < INT_MIN && sign == 1)   
                    return  INT_MIN;

                i++;
            }

            if(!isdigit(s[i]))
            {
                break;
            }
        }

        return sign?(-ans):ans;
    }
};
