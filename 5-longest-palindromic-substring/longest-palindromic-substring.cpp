class Solution {
public:
int solve(string &s , int i , int j , vector<vector<int>> &memo){
    if(memo[i][j]!=-1) return memo[i][j];
    if(i>=j)return memo[i][j]= 1;
    if(s[i]==s[j]) return memo[i][j]= solve(s,i+1,j-1,memo);
    else return memo[i][j]=0;
}
    string longestPalindrome(string s) {
        int n=s.size();
        int ans=-1e9;
        int st=-1;
        vector<vector<int>>memo(n,vector<int>(n,-1));
        for(int i =0 ;i<n;i++){
            for(int j = i ;j<n;j++){
                if(solve(s,i,j,memo)){
                    if(j-i+1>ans){
                    ans=(j-i+1);
                    st=i;
                    }

                }
            }
        }
        return s.substr(st,ans);
    }
};