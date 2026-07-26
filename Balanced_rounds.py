testcases = int(input())
for _ in range(testcases):
    n, k = map(int, input().split())
    
    
    input_list = list(map(int, input().split()))
    input_list.sort()
    
    
    current_len = 1
    max_len = 1
    
    for i in range(n - 1):
        
        if input_list[i + 1] - input_list[i] <= k:
            current_len += 1
        else:
             
            
            max_len = max(max_len, current_len)
            
            
            current_len = 1
            
    
    max_len = max(max_len, current_len)
    
    
    print(n - max_len)
