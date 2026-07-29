class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int  n=*max_element(piles.begin(),piles.end());//or use ranges::max(piles)
       for(int k=1;k<=n;k++)
       {
          long long totaltime=0;
          for(int pile:piles)
          {
            totaltime+=(pile+k-1)/k;
          }

          if(totaltime<=h)
          {
            return k;
          }
       }
       return -1;
    }
};
