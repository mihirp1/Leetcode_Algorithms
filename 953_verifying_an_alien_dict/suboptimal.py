class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        word_dict = {}
        new_list = []
        for iter1,ele1 in enumerate(order):
            word_dict[order[iter1]] = chr(65 + 32 + iter1)
            
        #print(word_dict)
            
        for ele2 in (words):
            temp1 = ""
            for iter3,ele3 in enumerate(ele2):
                temp1 += word_dict[ele3]
            new_list.append(temp1)
        
        
        old = sorted(new_list)
        print(old)
        print(new_list)
        
        for iter4, ele4 in enumerate(new_list):
            if(new_list[iter4] != old[iter4]):
                return False
            
            
        return True
