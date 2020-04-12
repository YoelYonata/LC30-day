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
    int res;
    
    int diameterOfBinaryTree(TreeNode* root) {  
        res = 0;
        search(root,res);
        return res;
    }
    
    int search (TreeNode* root, int &res){
        int left = 0;
        int right = 0;
        if(root == NULL){
            return 0;
        }
        left = search(root->left,res);
        right = search(root->right,res);
        res = max(res, left+right);
        return max(left,right) + 1;
    }
};