//https://leetcode.com/problems/two-sum/
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int size=nums.size();
        std::vector<int> myvector;
        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
                if(nums[i]+nums[j]==target)
                {
                    myvector.push_back (i);
                    myvector.push_back (j);
                }
        return myvector;
    }
};