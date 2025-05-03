class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> ht;
        priority_queue < pair<int, char> > maxHeap;

        for(auto e : s)
        {
            ht[e]++;
        }

        for(auto e : ht)
        {
            maxHeap.push({e.second, e.first});
        }

        s = "";

        while(!maxHeap.empty())
        {
            int freq = maxHeap.top().first;
            while(freq != 0)
            {
                s += maxHeap.top().second;
                freq--;
            }
            maxHeap.pop();
        }

        return s;
    }
};
