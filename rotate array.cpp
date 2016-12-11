//https://leetcode.com/problems/rotate-array/
class Solution
{
public:
    void reverse(vector<int>&num,int begin,int end)
    {
        int n=end-begin;
        if(n==0)
            return;
        for(int i=0; i<=(n/2); i++)
        {
            int temp=num[end-i];
            num[end-i]=num[i+begin];
            num[i+begin]=temp;
        }
    }
    void rotate(vector<int>& nums, int k)
    {
        int n=nums.size();
        if(n>1 && k%n!=0)
        {
            k=k%n;
            reverse(nums,0,n-1);
            reverse(nums,0,k-1);
            reverse(nums,k,n-1);
        }
    }
};
