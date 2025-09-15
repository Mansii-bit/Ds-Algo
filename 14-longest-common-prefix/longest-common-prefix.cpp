class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string s="";
        int i=min(strs[0].size(), strs[n-1].size());
        string ans="";
        for(int j=0;j<i;j++){
            if(strs[0][j]!=strs[n-1][j])break;
            ans+=strs[0][j];
        }
        return ans;
    }
};