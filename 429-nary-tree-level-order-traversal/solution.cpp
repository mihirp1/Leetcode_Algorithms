//https://leetcode.com/problems/n-ary-tree-level-order-traversal/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        
        if(root == NULL)
        {
            
           return res; 
        }
        while(!q.empty())
        {
            int t = q.size();
            vector<int> vec;
            
            for(int i = 0 ; i < t ; ++i)
            {
                
                auto temp = q.front(); 
                q.pop();
                vec.push_back(temp->val);
                for(auto m : temp->children)
                    q.push(m);         
                
            }
            
            res.push_back(vec);            
            
        }
        
        
        return res;
        
        
    }
    
};
