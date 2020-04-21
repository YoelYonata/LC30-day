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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int length = preorder.size();
        if (length == 0) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[0]);
        for (int i = 1; i <length; i++) {
            insert(root, preorder[i]);
        }
        return root;
    }
    
    void insert(TreeNode* node, int value) {
        if (value < node->val) {//left
            if (node->left == NULL) {
                node->left = new TreeNode(value);
            }
            else {
                insert(node->left, value);
            }
        }
        else {//right
            if (node->right == NULL) {
                node->right = new TreeNode(value);
            }
            else {
                insert(node->right, value);
            }
        }
    }
};