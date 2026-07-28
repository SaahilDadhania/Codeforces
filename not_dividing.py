testcases = int (input())
for _ in range(testcases):
    n = int(input())
    array = list(map(int, input().split()))
    
    for i in range(n):
        if array[i] == 1:
            array[i] += 1
            
    
    for i in range(n - 1):
        if array[i+1] % array[i] == 0:    
            array[i+1] += 1
      

    print(*array)    

