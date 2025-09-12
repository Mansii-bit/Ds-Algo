class Solution {
public:
    void solve(int i , int n , int k , vector<int>&temp, vector<vector<int>> &ans){
        if(k==0){
            if(n==0)ans.push_back(temp);
            return;
        }
        if(i>n || i>9){
            if(k==0 && n==0)ans.push_back(temp);
            return;
        }
        temp.push_back(i);
        solve(i+1,n-i,k-1,temp,ans);
        temp.pop_back();
        solve(i+1,n,k,temp,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(1,n,k,temp,ans);
        return ans;
    }
};