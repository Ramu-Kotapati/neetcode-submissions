class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        stack<pair<int,int>> stk;//(index,height)
        for(int i=0;i<heights.size();i++)
        {
            int start=i;
            while(!stk.empty()&&stk.top().second>heights[i])
            {
                pair<int,int> top=stk.top();
                int index=top.first;
                int height=top.second;
                maxarea=max(maxarea,height*(i-index));
                start=index;
                stk.pop();
            }
            stk.push({start,heights[i]});
        }
        while(!stk.empty())
        {
            int index = stk.top().first;
            int height = stk.top().second;
            int area=height*(heights.size()-index);
            maxarea=max(maxarea,area);
            stk.pop();
        }
        return maxarea;
    }
};
