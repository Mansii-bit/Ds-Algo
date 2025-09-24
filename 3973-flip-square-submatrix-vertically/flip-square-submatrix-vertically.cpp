class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int i =y;i<(k+y);i++){
            int p=x;
            int q=k+x-1;
            while(p<=q){
                swap(grid[p][i],grid[q][i]);
                p++;
                q--;
            }
        }
        return grid;
    }
};