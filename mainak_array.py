test = int(input())
for _ in range(test):
    n = int(input())
    array = list(map(int, input().split()))
    
    if n == 1:
        print(0)
        continue
    
    
    ans1 = max(array[1:]) - array[0]
    
   
    ans2 = array[-1] - min(array[:-1])
    
    
    ans3 = -1000000000
    for i in range(n - 1):
        diff = array[i] - array[i+1]
        if diff > ans3:
            ans3 = diff
            
    print(max(ans1, ans2, ans3))
