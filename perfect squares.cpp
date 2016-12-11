//https://leetcode.com/problems/perfect-squares/
class Solution
{
public:
    int numSquares(int n)
    {
        vector<int> squares;
        squares.push_back(1);
        int sizeofsquare=sqrt(n);
        for(int i=1; i<=sizeofsquare; i++)
            squares.push_back(i*i);
        int minsum[n+1];
        fill_n(minsum, n+1, INT_MAX);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sizeofsquare && squares[j]<=i; j++)
            {
                if(i%squares[j]==0 && (i/squares[j])<minsum[i])
                    minsum[i]=i/squares[j];
                else if(i%squares[j]!=0 )
                {
                    int tempn=i;
                    tempn-=squares[j];
                    if(minsum[tempn]+1<minsum[i])
                        minsum[i]=1+minsum[tempn];
                }
            }
        }
        return minsum[n];
    }
};