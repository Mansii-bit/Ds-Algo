class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int l=k;
        int r=n;
        vector<int> psum(n+1,0);
        for(int i =0;i<n;i++){
            psum[i+1]=psum[i]+nums[i];
        }
        int ans=0;
        while(l>=0){
            int sum=psum[l] + (psum.back() - psum[r]);
            ans=max(ans,sum);
            l--;r--;
        }
        return ans;
    }
};