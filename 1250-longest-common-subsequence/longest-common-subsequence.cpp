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
        vector<vector<int>>memo(n+1,vector<int>(m+1,-1));
        return lcs(n,m,text1,text2,memo);
    }
};