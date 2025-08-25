class Solution {
public:
void solve(vector<int>cnd,int n,int target,vector<vector<int>> &ans,vector<int>&temp,int ind){
    if(ind==n){
        if(target==0) ans.push_back(temp);
        return;
    }
    if(target>=cnd[ind]){
        target-=cnd[ind];
        temp.push_back(cnd[ind]);
        solve(cnd,n,target,ans,temp,ind);
        target+=cnd[ind];
        temp.pop_back();
         solve(cnd,n,target,ans,temp,ind+1);
    }else{
         solve(cnd,n,target,ans,temp,ind+1);
    }
}
    vector<vector<int>> combinationSum(vector<int>& cnd, int target) {
        int n =cnd.size();
        vector<vector<int>> ans;
        vector<int> temp;
        solve(cnd,n,target,ans,temp,0);
        return ans;
    }
};