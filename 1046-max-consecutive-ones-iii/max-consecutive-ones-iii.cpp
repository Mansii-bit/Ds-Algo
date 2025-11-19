class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int ans=0;
        vector<int>v(2,0);
        while(l<n && r<n){
            v[nums[r]]++;
            while(v[0]>k){
                v[nums[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};