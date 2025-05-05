class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, int node, vector<int>& visited)
    {
        visited[node] = 1;

        for(int i = 0; i < isConnected.size(); i++)
        {
            // Looking for neighbours of the current node.
            if(!visited[i] && isConnected[node][i])
            {
                // Going along the path of the neighbours of the current node to find all nodes that can be reached from the current node, and marking them as visited, because this is one complete province.
                dfs(isConnected, i, visited);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int pCnt = 0;
        vector<int> visited(isConnected.size(), 0);
        
        if(isConnected.size() == 1) return 1;

        // Checking neighbours of every node, and if a new component is being formed, that is visited[i] = 0, then increase province count.
        for(int i = 0; i < isConnected.size(); i++)
        {
            if(!visited[i])
            {
                pCnt++;
                dfs(isConnected, i, visited);
            }
        }

        return pCnt;
    }
};
