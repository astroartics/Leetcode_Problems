class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;

        for(auto e : edges)
        {
            // Forming adjacency list
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }

        vector<int> visited(n); // To keep track of already visited vertices.
        queue<int> path;        // To check if a path exists while queue is not empty, that is if the destination is found before queue becomes empty.
        path.push(source);
        visited[source] = 1;

        while(!path.empty())
        {
            int vertex = path.front();
            path.pop();

            if(vertex == destination)
                return true;

            // Iterating over the vector that the specific vertex contains in the map.
            // eg. graph[2] -> [1,3], then neighbour will take values 1, 3 in 2 iterations.
            for(auto neighbour : graph[vertex])
            {
                if(!visited[neighbour])
                {
                    visited[neighbour] = 1;
                    path.push(neighbour);
                }
            }
        }

        return false;
    }
};
