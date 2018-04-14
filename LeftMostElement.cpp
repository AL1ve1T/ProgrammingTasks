/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    struct value
    {
        int depth = 0;
        int val = 0;
    } result;
    
    void dfs(TreeNode* node, int depth)
    {
        if (depth >= result.depth)
        {
            result.depth = depth;
            result.val = node->val;
        }
        if (node->right != NULL)
            dfs(node->right, depth+1);
        if (node->left != NULL)
            dfs(node->left, depth+1);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        dfs(root, 0);
        return result.val;
    }
};