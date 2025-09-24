class Solution {
public:
void solve(vector<int>nums,vector<vector<int>>&ans,int ind,int n){
    if(ind==n){
        ans.push_back(nums);
        return;
    }
    int t=nums[ind];
    for(int i = ind ; i<n;i++){
        nums[ind]=nums[i];
        nums[i]=t;
        solve(nums,ans,ind+1,n);
        nums[i]=nums[ind];
        nums[ind]=t;
    }

}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        solve(nums,ans,0,n);
        return ans;
    }
};