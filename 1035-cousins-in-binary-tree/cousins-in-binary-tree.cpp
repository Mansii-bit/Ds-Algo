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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,TreeNode*>>q;
        q.push({root,nullptr});
        while(!q.empty()){
            int size=q.size();
            set<int>s;
            TreeNode* xparent=nullptr;
            TreeNode* yparent=nullptr;
            while(size--){
                TreeNode* node=q.front().first;
                TreeNode*parent=q.front().second;
                q.pop();
                if(node->val==x){
                    xparent=parent;
                }
                if(node->val==y){
                    yparent=parent;
                }
                if(node->left) q.push({node->left,node});
                if(node->right) q.push({node->right,node});
            }
            if(xparent!=nullptr && yparent!=nullptr && xparent!=yparent)return true;
        }
        return false;
    }
};