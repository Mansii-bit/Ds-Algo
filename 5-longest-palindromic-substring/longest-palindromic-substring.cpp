class Solution {
public:
bool solve(string &s , int i , int j){
    if(i>=j) return true;
    if(s[i]==s[j]) return solve(s,i+1,j-1);
    else return false;
}
    string longestPalindrome(string s) {
        int n=s.size();
        int ans=-1e9;
        int st=-1;
        for(int i =0 ;i<n;i++){
            for(int j = i ;j<n;j++){
                if(solve(s,i,j)){
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