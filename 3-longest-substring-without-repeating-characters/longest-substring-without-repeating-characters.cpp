class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.size();
        unordered_map<char,int>mapy;
        int ans=0;
        while(l<n && r<n){
            mapy[s[r]]++;
            while(l<n && mapy[s[r]]>1){
                mapy[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;

    }
};