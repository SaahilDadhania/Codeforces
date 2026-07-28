test = int(input())
for _ in range(test):
    n = int(input()) 
    array = list(map(int, input().split()))
    
    count = 0
    for i in range(len(array)):
       
        if array[i] != 0:
            
            if i == 0 or array[i-1] == 0:
                count += 1    
                
    if count >= 2:
        print(2)
    else:
        print(count)
