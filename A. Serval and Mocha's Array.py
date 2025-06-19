import math

def is_beautiful(arr):
    g = float('inf')
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            g = min(g, math.gcd(arr[i], arr[j]))
    return g <= 2

t = int(input())
for _ in range(t):
    n = int(input())
    arr = []
    while len(arr) < n:
        arr += list(map(int, input().split()))
    if is_beautiful(arr):
        print("Yes")
    else:
        print("No")