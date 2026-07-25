class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> vec;
        for(int i=0;i<position.size();i++)
        {
            vec.push_back({position[i],speed[i]});
        }
        sort(vec.rbegin(),vec.rend());
        int fleets=1;
        double prevtime=double(target-vec[0].first)/vec[0].second;
        for(int i=1;i<position.size();i++)
        {
            double currtime=double(target-vec[i].first)/vec[i].second;
            if(currtime>prevtime)
            {
                fleets++;
                prevtime=currtime;
            }
            
        }
        return fleets;
    }
};
