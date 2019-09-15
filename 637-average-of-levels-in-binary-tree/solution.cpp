//https://leetcode.com/problems/average-of-levels-in-binary-tree/
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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> vec;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int t = q.size();
            double mean=0; 
            for(int i = 0 ; i < t ; ++i)
            {
                                   
                    auto tempn = q.front();
                    mean += tempn->val;
                    q.pop();
                    if(tempn->left)
                        q.push(tempn->left);
                    if(tempn->right)
                        q.push(tempn->right);
                
            }
            
            vec.push_back(mean/t);
            
            
            
        }
        
        
        
        
        return vec;
    }
};
