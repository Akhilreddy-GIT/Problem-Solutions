t = int(input())

for _ in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))

    a.sort(reverse=True)

    print(a[x - 1] - 1)