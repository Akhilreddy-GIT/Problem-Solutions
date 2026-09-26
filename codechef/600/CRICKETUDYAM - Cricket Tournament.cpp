# cook your dish here
T = int(input())

for _ in range(T):
    N, M = map(int, input().split())

    if N - 1 >= M:
        print("YES")
    else:
        print("NO")