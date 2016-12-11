//https://leetcode.com/problems/median-of-two-sorted-arrays
class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int m=nums1.size();
        int n=nums2.size();
        int mid1,mid2;
        int even=0;
        if((m+n)%2==0)
        {
            even=1;
            mid1=((m+n)/2)-1;
            mid2=(m+n)/2;
        }
        else mid1=(m+n)/2;
        std::vector<int> nums3;
        int i=0,j=0,k=0;
        while(k<(mid1+2)
                && i<m && j<n)
        {

            if(nums1[i]==nums2[j])
            {
                nums3.push_back(nums1[i++]);
                nums3.push_back(nums2[j++]);
                k+=2;
            }
            else if(nums1[i]<nums2[j])
            {
                nums3.push_back(nums1[i++]);
                k++;
            }
            else if(nums1[i]>nums2[j])
            {
                nums3.push_back(nums2[j++]);
                k++;
            }
        }
        for(; k<(mid1+2)
                && i<m; k++)
        {
            nums3.push_back(nums1[i++]);
        }
        for(; k<(mid1+2)
                && j<n; k++)
        {
            nums3.push_back(nums2[j++]);
        }
        if(even==0)
            return nums3[mid1];
        else
            return ((double)nums3[mid1]+nums3[mid2])/2;
    }
};