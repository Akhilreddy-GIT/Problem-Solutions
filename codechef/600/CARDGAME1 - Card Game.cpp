# cook your dish here
T = int(input())

for _ in range(T):
    N, X = map(int, input().split())

    if X % 2 == 0:
        print(N // 2 - 1)
    else:
        print((N + 1) // 2 - 1)