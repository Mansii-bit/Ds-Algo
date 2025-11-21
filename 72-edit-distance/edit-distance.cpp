class Solution {
public:
int solve(int m , int n , string &w1 , string &w2 ,  vector<vector<int>>&memo){
if(m==0)return n;
if(n==0)return m;
if(memo[m][n]!=-1)return memo[m][n];
    if(w1[m-1]==w2[n-1]){
        return memo[m][n]= 0+solve(m-1,n-1,w1,w2,memo);
    }
    else{
        return memo[m][n]= 1+  min({solve(m-1,n-1,w1,w2,memo),
             solve(m-1,n,w1,w2,memo),
              solve(m,n-1,w1,w2,memo)});
    }
    return 0;
}
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>>memo(m+1,vector<int>(n+1,-1));
        return solve(m,n,word1,word2,memo);
    }
};