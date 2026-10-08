class Solution:
    def isHappy(self, n: int) -> bool:
        def sumofsquares(n):
            last=0
            sum=0
            while n!=0:
                last=n%10
                sum=sum+last*last
                n=n//10
            return sum
        
        slow=n
        fast=n
        while True:
            slow=sumofsquares(slow)
            fast=sumofsquares(sumofsquares(fast))

            if fast==1:
                return True
            elif slow==fast:
                return False
                    
            
      
         
