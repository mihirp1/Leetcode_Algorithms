//https://leetcode.com/problems/n-ary-tree-postorder-traversal/

class Solution {
public:
    vector<int> preorder(Node* root) {
    std::vector<int> vec;
    vec = preorderRecurse(root,vec);            
        return vec;
    }
 
     vector<int>& preorderRecurse(Node* root,std::vector<int>&vec)
    {
        if(root != NULL)
        {
            std::cout<<root->val<<std::endl;
            //vec.push_back(root->val);
            for(auto v1:root->children)
            {
                vec = preorderRecurse(v1,vec);
                
            }
            vec.push_back(root->val);  
            return vec;
        }
        else
        {
            return vec;
            
        }
        
    }
};
