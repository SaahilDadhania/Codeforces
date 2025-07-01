def is_beautiful(arr):
    total = 0
    for val in arr:
        if val == total:
            return False
        total =total +  val
    return True

def sort_desc(arr):
    arr.sort(reverse=True)


testcases = int(input())
for _ in range(testcases):
    n = int(input())
    arr = list(map(int, input().split()))

    if all(x == arr[0] for x in arr):
        print("NO")
        continue

    sort_desc(arr)

    if not is_beautiful(arr):
        for i in range(1, n):
            if arr[i] != arr[0]:
                arr[0], arr[i] = arr[i], arr[0]
                break

    if is_beautiful(arr):
        print("YES")
        print(*arr)
    else:
        print("NO")