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
int maxSum=-1e9;
int solve(TreeNode* root){
    if(!root)return 0;
    int leftsum=root->val+solve(root->left);
    // cout<<leftsum<<endl;
    int rightsum=root->val+solve(root->right);
    // cout<<rightsum<<endl;
    maxSum=max({leftsum,rightsum,maxSum,leftsum+rightsum-root->val,root->val});
    cout<<maxSum<<endl;
    return max({leftsum,rightsum,root->val});
}
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxSum;
    }
};