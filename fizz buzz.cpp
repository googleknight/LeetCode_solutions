//https://leetcode.com/problems/fizz-buzz/
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector <string> nums(n);
        for(int i=1; i<=n; i++)
        {
            if(i%15==0)
                nums[i-1]="FizzBuzz";
            else if(i%5==0)
                nums[i-1]="Buzz";
            else if(i%3==0)
                nums[i-1]="Fizz";
            else nums[i-1]=to_string(i);
        }
        return nums;
    }
};