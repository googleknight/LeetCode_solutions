//https://leetcode.com/problems/range-sum-query-immutable/
class NumArray
{
public:
    vector<int> sumofnums;
    NumArray(vector<int> &nums)
    {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            sumofnums.push_back(sum);
        }
    }
    int sumRange(int i, int j)
    {
        if(i>0)
            return (sumofnums[j]-sumofnums[i-1]);
        else return (sumofnums[j]);
    }
};// Your NumArray object will be instantiated and called as such:// NumArray numArray(nums);// numArray.sumRange(0, 1);// numArray.sumRange(1, 2);