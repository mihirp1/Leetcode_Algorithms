//https://leetcode.com/problems/find-anagram-mappings/
class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        
        std::vector<int> vec;

        std::map<int,std::stack<int>> m;
        
        
        for(int i = 0 ; i < B.size() ; ++i)
        {

                m[B[i]].push(i);
         
        }
        // Printing Set Contents- Finally No set was used but we used a stack
        /*
        for(auto it = m.begin() ; it != m.end() ; ++it)
        {
            std::cout << it->first<<std::endl;
            std::cout<<"The Vect : "<<std::endl;
            //auto its = m.find()
            for(auto its = its->begin() ; its != its.end() ; ++its)
            {
                vec.push_back(*its);
                vec.erase(*its);
                //std::cout<<its<<std::endl;
            }
        }
        */
        
        for(int i = 0 ; i < A.size() ; ++i)
        {
            
            auto it = m.find(A[i]);
            vec.push_back(it->second.top());
            it->second.pop();
            //vec.erase(it_vec+1);    
            
        }
        
        
        
        return vec;
    }
};
