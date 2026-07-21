import math
testcases = int(input())
eyes = [] 

for _ in range(testcases):
    current_testcase = list(map(int, input().split()))
    
    eyes.extend(current_testcase)
    
    
for n in eyes:
    count = 0
    
   
    for b in range(1, n + 1):
       
        multiples = n // b
        
        
        count += multiples * multiples
        
    print(count)               
                


    