class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int newColor)
    { 
        if(image[sr][sc] == color)
            image[sr][sc] = newColor;
        else
            return;    

        if(sr >= 1) dfs(image, sr - 1, sc, color, newColor);
        if(sc < image[0].size()-1) dfs(image, sr, sc + 1, color, newColor);
        if(sr < image.size()-1) dfs(image, sr + 1, sc, color, newColor);
        if(sc >= 1) dfs(image, sr, sc - 1, color, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int prevColor = image[sr][sc];
        if(prevColor!=color)
            dfs(image, sr, sc, prevColor, color);

        return image;
    }
};
