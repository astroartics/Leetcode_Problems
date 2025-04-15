class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        
        while(x != 0)
        {
            long int last = x % 10;
            ans = ans * 10 + last;
            x /= 10;
        }

        if((ans > (pow(2,31))) || (ans < pow(-2,31)))
            return 0;
        return ans;
    }
};
