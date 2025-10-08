/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(!root)return ans;
        map<int, TreeNode*> mapy;
        queue<pair<int, TreeNode*>> q;
        q.push({0, root});
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                auto x = q.front();
                int vtl = x.first;
                TreeNode* node = x.second;
                q.pop();
                mapy[vtl] = node;
                if (node->left)
                    q.push({vtl +1, node->left});
                if (node->right)
                    q.push({vtl + 1, node->right});
            }
        }
        for(auto x: mapy){
            ans.push_back(x.second->val);
        }
        return ans;
    }
};