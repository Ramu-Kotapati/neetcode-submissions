class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        for(int i=0;i<heights.size();i++)
        {
            int height=heights[i];
            int rightmost=i+1;
            while(rightmost<heights.size()&&heights[rightmost]>=height)
            {
               rightmost++;
            }
            int leftmost=i;
            while(leftmost>=0&&heights[leftmost]>=height)
            {
              leftmost--;
            }
            rightmost--;
            leftmost++;
            int area=height*(rightmost-leftmost+1);
            maxarea=max(maxarea,area);
        
        }
        return maxarea;


    }
};
