//https://leetcode.com/problems/reverse-integer/
#include<limits.h>class Solution {
public:
int reverse(int x)
{
    int rev=0;
    int flag=0;
    if(x<0)
    {
        flag=1;
        x*=-1;
    }
    for(; x>0; x/=10)
    {
        int temp;
        temp=x%10;
        rev=(rev*10)+x%10;
        if(rev%10!=temp)
            return 0;
    }
    if(flag==1)
        return -1*rev;
    return rev;
}
};