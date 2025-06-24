testcases = int(input())
for _ in range(testcases):
    n = int(input())  
    goals = list(map(int, input().split()))  
    total = sum(goals)  

    if total != 0:
        print(-total)  
    else:
        print(0)