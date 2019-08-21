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
    int minDepth(TreeNode* root) {
        
   if (!root) return 0;
    int L = minDepth(root->left), R = minDepth(root->right);
    return 1 + (L && R ? min(L, R) : max(L, R));
        
    }
};

/*

We need to add the smaller one of the child depths - except if that's zero, then add the larger one. The first Python solution is the clearest because it lets me directly say exactly that.

int minDepth(TreeNode* root) {
    if (!root) return 0;
    int L = minDepth(root->left), R = minDepth(root->right);
    return 1 + (min(L, R) ? min(L, R) : max(L, R));
}


*/
