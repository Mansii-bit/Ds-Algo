class Solution {
public:
void dfs(int i , int j , vector<vector<int>>&grid , int m , int n  , int&size){
    if(i<0 || j<0 || i>=m || j>= n ||grid[i][j]==0)return;
    size++;
    grid[i][j]=0;
    dfs(i+1,j,grid,m,n,size);
    dfs(i-1,j,grid,m,n,size);
    dfs(i,j+1,grid,m,n,size);
    dfs(i,j-1,grid,m,n,size);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int size=0;
                    dfs(i,j,grid,m,n,size);
                    ans=max(ans,size);
                }
            }
        }
        return ans;
    }
};