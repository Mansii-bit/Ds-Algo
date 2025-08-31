class Solution {
public:
void solve(vector<int> nums , int low , int high , int &ans){
    if(low>high)return;
   int mid=(low+high)/2;
    if(nums[low]<nums[mid]){
        ans=min(ans,nums[low]);
        solve(nums,mid+1,high,ans);
    }
    else{
        ans=min(ans,nums[mid]);
      solve(nums,low,mid-1,ans);  
    } 
    if(nums[mid]<nums[high]){
        ans=min(ans,nums[mid]);
        solve(nums,low,mid-1,ans);
    }
    else {
        ans=min(ans,nums[high]);
        solve(nums,mid+1,high,ans);
    }
}
    int findMin(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        else if(nums.size()==2)return min(nums[0],nums[1]);
        int ans=INT_MAX;
        int low=0;
        int high=nums.size()-1;
        solve(nums,low,high,ans);
        return ans;
    }
};