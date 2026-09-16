# cook your dish here
T = int(input())

for _ in range(T):
    N, A, B = map(int, input().split())

    odd = (N + 1) // 2
    even = N // 2

    total = odd * B + even * A

    print(total)