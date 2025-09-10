class Solution {
public:
    void solve(vector<int>& cnd, int target, vector<int>& temp, int i, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int j = i; j < cnd.size(); j++) {
            if (j > i && cnd[j] == cnd[j - 1]) continue;
            if (cnd[j] > target) break;
            temp.push_back(cnd[j]);
            solve(cnd, target - cnd[j], temp, j + 1, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cnd, int target) {
        sort(cnd.begin(), cnd.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(cnd, target, temp, 0, ans);
        return ans;
    }
};
