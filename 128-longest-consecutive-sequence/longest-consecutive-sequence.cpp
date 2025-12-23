class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int ans=0;
        for(int i : nums) s.insert(i);
        for(int i : nums){
            if(s.count(i-1)==0){
                int num=i;
                int c=0;
                while(s.count(num)==1){
                    s.erase(num);
                    c++;
                    num++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};