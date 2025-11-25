class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0,r=0,ans=0;
        vector<int> cnt(3,0);
        while(r<n){
            cnt[s[r]-'a']++;
            if(cnt[0]>0 && cnt[1]>0 && cnt[2]>0){
                ans+=(n-r);
                cnt[s[l]-'a']--;
                l++;
            }
            while(l<r){
            if(cnt[0]>0 && cnt[1]>0 && cnt[2]>0)
                ans+=(n-r);
            else break;
            cnt[s[l]-'a']--;
            l++;
        }
            r++;
        }
        
        return ans;
    }
};