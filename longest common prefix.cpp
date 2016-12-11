//https://leetcode.com/problems/longest-common-prefix/
class Solution
{
public:
    static bool comp(string x,string y)
    {
        return (x.length()<y.length());
    } static bool comparestring(string x, string y)
    {
        int n=x.length();
        for(int i=0; i<n; i++)
            if(x[i]!=y[i])
                return 1;
        return 0;
    }
    string longestCommonPrefix(vector<string>& strs)
    {
        int count=0;
        int m=strs.size();
        string smallest;
        if(m>0)
            smallest=*min_element(std::begin(strs),std::end(strs),comp);
        while(smallest.length()>0)
        {
            int i;
            int flag=0;
            for(i=0; i<m; i++)
                if(comparestring(smallest,strs[i])!=0)
                {
                    smallest.pop_back();
                    flag=1;
                    break;
                }
            if(flag==0)
                return smallest;
        }
        return smallest;
    }
};