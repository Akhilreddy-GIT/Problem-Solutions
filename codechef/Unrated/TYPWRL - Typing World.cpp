# cook your dish here
T=int(input())


for _ in range(T):
    N, M = map(int, input().split())
    S = input()
    L = input()

    current = 1
    maximum = 1

    for i in range(1, N):
        if (S[i] in L) == (S[i - 1] in L):
            current += 1
        else:
            current = 1

        maximum = max(maximum, current)

    print(maximum)