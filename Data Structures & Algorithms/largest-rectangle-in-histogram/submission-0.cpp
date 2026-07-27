class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        for(int i=0;i<heights.size();i++)
        {
            int rightmost=i;
            while(rightmost<heights.size()&&heights[rightmost]>=heights[i])
            {
               rightmost++;
            }
            int leftmost=i;
            while(leftmost>=0&&heights[leftmost]>=heights[i])
            {
              leftmost--;
            }
            int area=heights[i]*(rightmost-leftmost-1);
            maxarea=max(maxarea,area);
        
        }
        return maxarea;


    }
};
