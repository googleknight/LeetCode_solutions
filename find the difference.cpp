//https://leetcode.com/problems/find-the-difference/
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int n=s.length();
        int c=0;
        for(int i=0; i<n; i++)
            c=c^s[i]^t[i];
        c=c^t[t.length()-1];
        return c;
    }
};