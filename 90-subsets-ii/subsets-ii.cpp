class Solution {
public:
    void solve(vector<int>&nums , int n , int i , vector<int> &temp , vector<vector<int>> &ans){
        ans.push_back(temp);
        for(int ind = i ;ind<n ;ind++){
            if(ind>i && nums[ind]==nums[ind-1])continue;
            temp.push_back(nums[ind]);
            solve(nums,n,ind+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums,n ,0,temp,ans);
        return ans;
    }
};