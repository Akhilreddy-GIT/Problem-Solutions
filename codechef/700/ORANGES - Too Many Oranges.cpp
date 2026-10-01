# cook your dish here
T = int(input())

for _ in range(T):
    N, K = map(int, input().split())

    if K >= N * 10 and K <= N * 10 + N * 2:
        print("YES")
    else:
        print("NO")