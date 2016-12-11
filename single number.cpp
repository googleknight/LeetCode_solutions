//https://leetcode.com/problems/single-number
class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        int c=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
            c=c^nums[i];
        return c;
    }
};