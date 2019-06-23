
class Solution:
    def fib(self, N: int) -> int:
        
        steps = {}
        n = N
    
        steps[0] = 0
        steps[1] = 1
        if(n == 0):
            return 0

        if(n == 1):
            return 1


        elif(n > 1):
            if (n-1 not in steps):
                steps[n-1] = self.fib(n -1)

            if( n -2 not in steps):
                steps[n-2] = self.fib(n -2)
            return steps[n-2] + steps[n-1]

        
