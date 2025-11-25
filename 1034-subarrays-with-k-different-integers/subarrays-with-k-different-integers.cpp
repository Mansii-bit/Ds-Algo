class Solution {
public:
int sum(vector<int>& nums, int k){
    int n=nums.size();
    map<int,int>mapy;
    int l=0,r=0,ans=0;
    while(r<n){
        mapy[nums[r]]++;
        while(mapy.size()>k){
            if(mapy[nums[l]]==1) mapy.erase(nums[l]);
            else mapy[nums[l]]--;
            l++;
        }
        ans+=(r-l+1);
        r++;
    }
    return ans;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt1=sum(nums,k);
        int cnt2=sum(nums,k-1);
        return cnt1-cnt2;
    }
};