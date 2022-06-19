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
    struct S {
        bool isBST;
        int minVal, maxVal, sum;
    };
    
    S helper(TreeNode *node, int &res) {
        if (!node) {
            return { true, INT_MAX, INT_MIN, 0 };
        }
        S l = helper(node->left, res);
        S r = helper(node->right, res);
        if (l.isBST && r.isBST && l.maxVal < node->val && r.minVal > node->val) {
            int sum = l.sum + r.sum + node->val;
            res = max(res, sum);
            return { true, min(l.minVal, node->val), max(r.maxVal, node->val), sum };
        } else {
            return { false, 0, 0, 0 };
        }
    }
public:
    int maxSumBST(TreeNode* root) {
        int res = 0;
        helper(root, res);
        return res;
    }
};