class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int i=0;
        int sum=0;
        while(i<k){
            sum+=nums[i];
            i++;
        }
        if(k>=n)return sum;
        ans=max(ans,sum);

        int r=n-1;
        i--;
        while(i>=0){
            sum-=nums[i];
            sum+=nums[r];
            r--;
            i--;
            ans=max(ans,sum);
        }
        return ans;
    }
};