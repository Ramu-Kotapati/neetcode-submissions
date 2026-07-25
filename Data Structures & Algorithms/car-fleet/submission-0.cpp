class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> vec;
        for(int i=0;i<position.size();i++)
        {
            vec.push_back({position[i],speed[i]});
        }
        sort(vec.rbegin(),vec.rend());
        stack<double> stk;
        for(auto &x : vec)
        {
            double time=double(target-x.first)/x.second;
            stk.push(time);
            if(stk.size()>=2)
            {
                double top1=stk.top();
                stk.pop();
                double top2=stk.top();
                if(top1>top2)
                {
                    stk.push(top1);
                }
            }
        }
              return stk.size();
    }
};
