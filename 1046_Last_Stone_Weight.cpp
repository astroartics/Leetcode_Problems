class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(auto e : stones)
        {
            pq.push(e);
        }

        while(pq.size() > 1)
        {
            int s1 = pq.top();
            cout << s1 << endl;
            pq.pop();
            
            int s2 = pq.top();
            cout << s2 << endl;

            if(s1 != s2)
            {
                pq.pop();
                pq.push(s1 - s2);
            }else   
                {
                    pq.pop();
                } 
        }

        return pq.empty()?0:pq.top();    
    }
};
