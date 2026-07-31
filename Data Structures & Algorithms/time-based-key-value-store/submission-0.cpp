class TimeMap {
public:

    unordered_map<string,vector<pair<int , string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end())
        {
            return "";
        }
        string ans="";
        for(auto &m : mp[key])
        {
            if(m.first<=timestamp)
            ans=m.second;
            else
            break;

        }

        return ans;

    }
};
