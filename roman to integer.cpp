//https://leetcode.com/problems/roman-to-integer/
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char,int> symbol=
        {
            {
                'I',1
            },{
                'V',5
            },{
                'X',10
            },{
                'L',50
            },{
                'C',100
            },{
                'D',500
            },{
                'M',1000
            }
        };
        const char *str=s.c_str();
        int n=strlen(str);
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(i+1<n)
            {
                if((str[i]=='I' && str[i+1]=='V')
                        ||(str[i]=='I' && str[i+1]=='X')||(str[i]=='I' && str[i+1]=='X'                )||(str[i]=='X' && str[i+1]=='L')||(str[i]=='X' && str[i+1]=='C')||(str[i]=='C' && str[i+1]=='D'                )||(str[i]=='C' && str[i+1]=='M'))
                {
                    ans+=symbol[str[i+1]]-symbol[str[i]];
                    i++;
                    cout<<ans<<endl;
                }
                else ans+=symbol[str[i]];
            }
            else ans+=symbol[str[i]];
        }
        return ans;
    }
};