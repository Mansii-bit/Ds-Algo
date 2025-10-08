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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        vector<vector<int>> v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            while(size--){
            TreeNode* node=q.front();
            temp.push_back(node->val);
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            q.pop();
            }
            v.push_back(temp);
        }
        for( auto i : v){
            ans.push_back(i.back());
        }
        return ans;
    }
};