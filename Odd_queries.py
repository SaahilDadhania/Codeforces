test = int(input())
for _ in range(test):
    n, q = map(int, input().split())
    
    
    array = list(map(int, input().split()))
    
   
    prefix = [0] * (n + 1)
    for i in range(n):
        prefix[i + 1] = prefix[i] + array[i]
        
    original_sum = prefix[-1]
    
    
    for _ in range(q):
        l, r, k = map(int, input().split())
        
       
        removed_sum = prefix[r] - prefix[l - 1]
        added_sum = k * (r - l + 1)
        
        new_sum = original_sum + added_sum - removed_sum
        
        
        if new_sum % 2 != 0:
            print("YES")
        else:
            print("NO")
