class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>>mapy;
        int n=s.size();
        for(int i=0;i<n;i++){
            char c=s[i];
            if(mapy.find(c)!=mapy.end()){
                mapy[c].first++;
            }
            else mapy[c]={1,i};
        }
        int ans=1e9;
        for( auto x : mapy){
            if(x.second.first ==1)ans=min(ans,x.second.second) ;
        }
        return ans==1e9 ? -1 : ans;
    }
};