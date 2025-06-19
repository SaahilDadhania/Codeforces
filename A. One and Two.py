testcases = int(input())  

for _ in range(testcases):
    n = int(input())
    arr = list(map(int, input().split()))
    
    twocount = 0
    index = []
    
    for i in range(len(arr)):
        if arr[i] == 2:
            twocount += 1
            index.append(i)
        
    if twocount % 2 != 0:
        print(-1)
    else:
        count = 0
        for i in range(len(arr)):
            if arr[i] == 2:
                count += 1
            if count == twocount // 2:
                print(i + 1)  # 1-based index
                break