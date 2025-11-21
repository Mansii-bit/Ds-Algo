class Solution {
public:
int lcs(int n , int m , string &t1 , string &t2 ,vector<vector<int>> &memo ){
    if(m==0 || n==0) return 0;
    if(memo[n][m]!=-1)return memo[n][m];
    if(t1[n-1]==t2[m-1]){
        return memo[n][m]= 1+lcs(n-1,m-1,t1,t2, memo);
    }
    else{
         return memo[n][m]= max(lcs(n-1,m,t1,t2,memo) , lcs(n,m-1,t1,t2,memo));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};