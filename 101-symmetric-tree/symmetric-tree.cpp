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
bool solve(TreeNode* Lroot , TreeNode* Rroot){
    if(!Lroot && !Rroot) return true;
    if(!Lroot || !Rroot) return false;
    if(Lroot->val != Rroot->val) return false;
    return(solve(Lroot->left,Rroot->right)) && (solve(Lroot->right,Rroot->left)) ;
}
    bool isSymmetric(TreeNode* root) {
       return solve(root->left, root->right);
    }
};