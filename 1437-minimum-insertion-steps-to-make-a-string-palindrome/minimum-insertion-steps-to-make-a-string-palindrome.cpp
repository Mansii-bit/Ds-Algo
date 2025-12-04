class Solution {
public:
    int  solve(string &s , int i , int j , vector<vector<int>>&memo){
        if(memo[i][j]!=-1) return memo[i][j];
        if(i>=j)return memo[i][j]= 0;
        if(s[i]==s[j]){
            return memo[i][j]= 0+solve(s,i+1,j-1,memo);
        }
        else return memo[i][j] =1+min(solve(s,i+1,j,memo) , solve(s,i,j-1,memo));
    }
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>>memo(n,vector<int>(n,-1));
        return solve(s,0,n-1,memo);
    }
};