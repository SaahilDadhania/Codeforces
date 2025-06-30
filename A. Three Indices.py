def find_peak_triplet(p):
    n = len(p)
    min_index = 0
    for j in range(1, n - 1):
        if p[j] > p[min_index] and p[j] > p[j + 1]:
            print("YES")
            print(min_index + 1, j + 1, j + 2)
            return
        if p[j] < p[min_index]:
            min_index = j
    print("NO")

t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    find_peak_triplet(p)