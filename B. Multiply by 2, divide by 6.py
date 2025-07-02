def mul(n, count=0):
    if n == 1:
        print(count)
        return
    elif n % 6 == 0:
        mul(n // 6, count + 1)
    else:
        if n % 3 != 0: 
            print(-1)
            return
        mul(n * 2, count + 1)

t = int(input())

for _ in range(t):
    n = int(input())
    mul(n)