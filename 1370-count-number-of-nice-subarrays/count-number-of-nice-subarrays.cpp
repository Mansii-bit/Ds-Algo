class Solution {
public:
int sum(vector<int>& nums, int k){
    if(k<0)return 0;
    int n=nums.size();
    int l=0,r=0,odd=0,cnt=0;
    while(r<n && l <n){
        if(nums[r]%2!=0 ) odd++;
        while(odd>k){
            if(nums[l]%2!=0) odd--;
            l++;
        }
        cnt+=(r-l+1);
        r++;
    }
    return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt1=sum(nums,k);
        int cnt2=sum(nums,k-1);
        return cnt1-cnt2;
    }
};