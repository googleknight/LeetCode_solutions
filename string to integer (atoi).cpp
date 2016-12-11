//https://leetcode.com/problems/string-to-integer-(atoi)
class Solution
{
public:
    int myAtoi(string str)
    {
        const char *strarr=str.c_str();
        int n=strlen(strarr);
        int ints[]=
        {
            0,1,2,3,4,5,6,7,8,9
        };
        int num=0;
        int firstnum=0;
        int signflag=0;
//0 for + 1 for - int flag=0;
        for(int i=0; i<n; i++)
        {
            if(flag==0 && (strarr[i]==43|| strarr[i]==45)
                    && firstnum==0)
            {
                flag=1;
                signflag=strarr[i]==45?1:0;
                continue;
            }
            if(strarr[i]==32 && firstnum==0 && flag==0)
                continue;
            else if((strarr[i]>=48 && strarr[i]<=57)!=1)
                break;
            if(strarr[i]>=48 && strarr[i]<=57)
            {
                firstnum=1;
                int digit=ints[strarr[i]-48];
                if(signflag==1)
                {
                    num=num*10-digit;
                    if(num%10!=(-1*digit))
                        return INT_MIN;
                }
                else
                {
                    num=num*10+digit;
                    if(num%10!=digit)
                        return INT_MAX;
                }
            }
        }
        return num;
    }
};