//https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
    
public:
    
     bool isReverse(char c1, char c2) {
    if (c1 != NULL && c2 != NULL) {
        if (c1 == '{' and c2 == '}') return true;
        if (c1 == '[' and c2 == ']') return true;
        if (c1 == '(' and c2 == ')') return true;
    }
    return false;
}
        
    bool isValid(string s) {
   //using namespace std;
    //int flag = 0;
    stack<char> st;

        
    for(int i = 0;i<s.size();i++)
        
    {
        
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }
        //cout << st.top() << " "<<endl;
        //cout << st.top() << " " << char(gquiz1[(s[i])])<<endl;
        if(isReverse(st.top(),s[i]))  
          st.pop();
        else
            st.push(s[i]);
        
    }
        return(st.empty());

     
      
        //return true;
    }
};
