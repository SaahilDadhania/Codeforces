testcases = int(input())
for _ in range(testcases):
    n = int(input())
    string = input()
    current_streak = 1
    max_streak = 1
    for i in range(n-1):
        if string[i] == string[i+1]:
            current_streak += 1
        else:
            max_streak = max(max_streak, current_streak)
            current_streak = 1
    print (max(max_streak, current_streak)+1)        
                