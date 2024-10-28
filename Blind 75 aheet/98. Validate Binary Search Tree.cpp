// Link: https://leetcode.com/problems/validate-binary-search-tree/

// Time complexity: O(n)
// Space complexity: O(1)


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
    bool isValid(TreeNode* root,long minval, long maxval){
        if(root==NULL) return true;
        if(root->val>=maxval || root->val<=minval)
            return false;
        return (isValid(root->left,minval,root->val) && isValid(root->right, root->val,maxval));
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }
};