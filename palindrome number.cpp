//https://leetcode.com/problems/palindrome-number/
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int temp=x;
        int count=0;
        for(; temp>0; temp/=10,count++);
        if(count==1 ||x==0)
            return true;
        else if(x<0)
            return false;
        temp=x;
        while(temp>0)
        {
            int num1=temp/(pow(10,count-1));
            int num2=temp%10;
            if(num1!=num2)
                return false;
            temp-=num1*pow(10,count-1);
            temp/=10;
            count-=2;
        }
        return true;
    }
};