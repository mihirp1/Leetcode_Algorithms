// https://leetcode.com/problems/roman-to-integer/submissions/
class Solution {
public:
   int romanToInt(string s) {
        
        std::map <std::string,int> roma =
        {
            {"I",1},
            {"V",5},
            {"X",10},
            {"L",50},
            {"C",100},
            {"D",500},
            {"M",1000},
            {"IV",4},
            {"IX",9},
            {"XL",40},
            {"XC",90},
            {"CD",400},
            {"CM",900}  
            
        };
        
        
        int sum = 0;
        int i = 0;
        //std::cout << s <<std::endl;
        
        while (i<s.length())
        {
            std::string s1 = s.substr(i,2);
            //std::cout << "Initial Case 1 " << s1<<std::endl;
            //break;
            auto it = roma.find(s1);
            
            if (it != roma.end())
            {
                sum += it->second;
                //std::cout << it->first <<" Case 1:" << it->second<<std::endl;
                i +=2;
             
            }
            else
            {
               string s2(1,s[i]);
               //std::cout << "Initial Case 1 " << s2<<std::endl;
               auto it = roma.find(s2);
               if (it != roma.end())
               {
                sum += it->second;
                //std::cout << it->first <<" Case 2:" << it->second<<std::endl;
                i +=1; 
               }
                   
            }
            
        }
    return sum;
    }
};
