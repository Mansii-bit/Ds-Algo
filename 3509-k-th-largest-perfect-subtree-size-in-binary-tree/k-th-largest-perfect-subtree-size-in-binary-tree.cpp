/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<bool,int> solve(TreeNode* root, vector<int>& v) {
        if (!root) return {true, 0}; // base case
        
        if (!root->left && !root->right) {
            v.push_back(1);
            return {true, 1};
        }

        auto left = solve(root->left, v);
        auto right = solve(root->right, v);

        if (left.first && right.first && left.second == right.second) {
            int h = left.second + 1;
            int size = pow(2, h) - 1;
            v.push_back(size);
            return {true, h};
        }

        return {false, -1};
    }

    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        vector<int> v;
        solve(root, v);
        if (v.size() < k) return -1;
        sort(v.begin(), v.end(), greater<int>());
        return v[k - 1];
    }
};
