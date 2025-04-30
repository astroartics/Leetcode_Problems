class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA = 0;
        
        // for(int i=0;i<height.size();i++)
        // {
        //     for(int j = height.size()-1;j>=0;j--)
        //     {
        //         if(height[i] > height[j] || height[j] >= height[i])
        //         {
        //             maxA = max((min(height[i],height[j]) * (j-i)), maxA);
        //         }
        //     }
        // }

        // Because we are moving inwards, i.e. losing width, we must gain height to make the area maximum,
        // so when we come across a shorter line, we move inwards and keep the bigger line, because we want to
        // maximize the area.
        for(int i=0, j=height.size()-1;i<j;)
        {
            maxA = max((min(height[i],height[j]) * (j-i)), maxA);
            if(height[i] < height[j])
                i++;
            else
                j--;   
        }

        return maxA;
    }
};
