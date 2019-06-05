class Solution:
    def climbStairs(self, n: int) -> int:
        
        steps = {}
        
        if(n == 1):
            if(1 not in steps.keys()):
                steps[1] = 1
                return 1
            
        if(n == 2):
            if(2 not in steps.keys()):
                steps[2] = 2
            return 2
        
        elif(n > 2):
            if (n-1 not in steps.keys()):
                steps[n-1] = self.climbStairs(n -1)
                
            if( n -2 not in steps.keys()):
                steps[n-2] = self.climbStairs(n -2)
            return steps[n-2] + steps[n-1]
        
