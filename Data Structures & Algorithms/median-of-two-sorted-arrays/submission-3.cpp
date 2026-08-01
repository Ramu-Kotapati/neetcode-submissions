class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge(nums1.size()+nums2.size());
        int i=0;
        int j=0;
        int k=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<=nums2[j])
            {
                merge[k]=nums1[i];
                i++;
                k++;
            }
            else if(nums2[j]<nums1[i])
            {
                merge[k]=nums2[j];
                j++;
                k++;
            }

        }
        while(i<nums1.size())
        {
            merge[k]=nums1[i];
            i++;
            k++;
        }
        while(j<nums2.size())
        {
            merge[k]=nums2[j];
            j++;
            k++;
        }
        if(merge.size()%2!=0)
        {
           return  double(merge[merge.size()/2]);

        }
        else
        {
           int a= merge[merge.size()/2];
           int b=merge[(merge.size()/2)-1];
           return double(a+b)/2;
        }

    
    }
};
