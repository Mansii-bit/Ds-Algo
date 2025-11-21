class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        map<char,int>mapy;
        int maxi=-1;
        int l=0,r=0;
        int ans=0;
        while(r<n){
              mapy[s[r]]++;
              maxi=max(mapy[s[r]],maxi);

              if((r-l+1) - maxi >k  ){
                if(mapy[s[l]]==1) mapy.erase(s[l]);
                else mapy[s[l]]--;
                l++;
                for(auto x : mapy){
                    maxi=max(maxi,x.second);
                }
              }
              ans=max(r-l+1,ans);
              r++;
        }
return ans;
    }
};