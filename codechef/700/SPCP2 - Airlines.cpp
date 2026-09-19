# cook your dish here
T = int(input())

for _ in range(T):
    X, N = map(int, input().split())

    required = N // 100

    if N % 100 != 0:
        required += 1

    if required > X:
        print(required - X)
    else:
        print(0)