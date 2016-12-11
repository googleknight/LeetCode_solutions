//https://leetcode.com/problems/island-perimeter/
class Solution
{
public:
    int islandPerimeter(vector<vector<int>>& grid)
    {
        int ans=0;
        int nc=grid[0].size(),nr=grid.size();
        for(int i=0; i<nr; i++)
            for(int j=0; j<nc; j++)
            {
                if(grid[i][j]==1)
                {
                    ans+=4;
                    if(i-1>=0)
                        ans-=grid[i-1][j];
                    if(j+1<=nc-1)
                        ans-=grid[i][j+1];
                    if(i+1<=nr-1)
                        ans-=grid[i+1][j];
                    if(j-1>=0)
                        ans-=grid[i][j-1];
                }
            }
        return ans;
    }
};