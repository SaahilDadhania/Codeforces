testcases = int(input())
for _ in range(testcases):
    text = input().strip()
    count = 0
    
    for i in range(len(text) - 1):
        if text[i] == text[i + 1]:
            count += 1
            
            if count == 3:
                print("NO")
                break
    else:
        print("YES")