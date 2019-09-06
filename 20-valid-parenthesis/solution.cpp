//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:


    
    
    
    bool isValid(string s) {
        
        std::unordered_map<char,char> hash;
        hash['('] = ')';
        hash['['] = ']';
        hash['{'] = '}';    
        stack<char> st;
        
        if(s.size() == 1)
        {
            return false;
        }
        
        
        if(s.size() % 2 != 0)
        {
            return false;
        }
        
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(st.empty() && hash.count(s[i]) == 0)
            {
                return false;
            }
            else if(st.empty() && hash.count(s[i]) > 0)
            {
                st.push(s[i]);
            }
            else if(!st.empty() && hash.count(s[i]) > 0)
            {
                    st.push(s[i]);              
                
            }
            else if (!st.empty() && hash.count(s[i]) == 0)
            {
                if(hash.count(st.top()) > 0)
                {
                    if(hash[st.top()] != s[i])
                    {
                        return false;
                    }
                    else
                    {
                        st.pop();
                    }
                }
            }
            
            
 
        }
        if(st.empty())
            return true;
        else
            return false;
    }   
    
};
