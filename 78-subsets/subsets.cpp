class Solution {
public:
void solve(vector<vector<int>>& ans, vector<int>& nums,vector<int>& temp,int ind){
    if(ind==nums.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    solve(ans,nums,temp,ind+1);
    temp.pop_back();
    solve(ans,nums,temp,ind+1);
    
   
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,nums,temp,0);
        return ans;
    }
};