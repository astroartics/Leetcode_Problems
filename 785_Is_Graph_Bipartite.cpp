class Solution {
public:
    bool validColor(vector<vector<int>>& graph, vector<int>& color, int curr, int c)
    {
        if(color[curr] != 0)  // That means a color has already been assigned.
        {
            return color[curr] == c;  // Checking if the current node has the color we want to assign it.
        }

        color[curr] = c;

        // Visiting all neighbours of the current node to assign colors to them.
        for(auto neighbour : graph[curr])
        {
            // Passing negative of the current color as adjacent nodes cannot be of the same color.
            if(!validColor(graph, color, neighbour, -c)) 
                return false;
        }

        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(), 0);

        for(int i = 0; i < graph.size(); i++)
        {
            if(color[i] == 0 && !validColor(graph, color, i, 1))
            {
                return false;
            }
        }
        return true;
    }
};
