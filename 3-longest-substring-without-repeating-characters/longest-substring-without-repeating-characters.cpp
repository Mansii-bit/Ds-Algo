class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        set<char>s1;
        for(int i=0;i<n;i++){
            s1.insert(s[i]);
            for(int j=i+1;j<n;j++){
                if(s1.count(s[j])==1){
                    break;
                }
                s1.insert(s[j]);
            }
            ans=max(ans,(int)s1.size());
            s1.clear();
        }
        return ans;
    }
};