testcases = int(input())

for _ in range(testcases):
    length = int(input())
    permutation = list(map(int, input().split()))
    
    count = 0 
    
    for i in range(length - 1):
        x = permutation[i]
        y = permutation[i + 1]
        
        d = abs(x - y)
        
        if x % d == 0:
            count += 1

    print(count)
            
    