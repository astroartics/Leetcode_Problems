class Solution {
public:

    int numTilings(int n) {
        vector<long int> cache;
        cache.push_back(1);
        cache.push_back(1);
        cache.push_back(2);
        int i = 3, ans = 0;

        while(i < n+1)
        {
            cache.push_back((2 * cache[i - 1] + cache[i - 3]) % int(pow(10, 9) + 7));
            i++;
        }

        return (cache[n] % int((pow(10, 9) + 7)));
    }
};
