class Solution {
public:
int lci(int ind , int prev , vector<int>&nums , int n , vector<vector<int>>&memo){
    if(ind>=n)return 0;
    if(memo[ind][prev+1]!=-1) return memo[ind][prev+1];
    int notTake=0+lci(ind+1,prev,nums,n,memo);
    int take= (prev==-1 || nums[prev]<nums[ind]) ? 1+lci(ind+1,ind,nums,n,memo) : 0;
    return memo[ind][prev+1]= max(take,notTake);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>memo(n,vector<int>(n+1,-1));
        return lci(0,-1,nums,n,memo);
    }
};