class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> days;
        for(int i=0;i<n;i++)
        {
          int j=i+1;
          int count=1;
          while(j<n)
          {
            if(temperatures[j]>temperatures[i])
            {  
                days.push_back(count);
                break;
            }
            j++;
            count++;
          }
          if(j==n) days.push_back(0);
        }

        return days;
    }

};
