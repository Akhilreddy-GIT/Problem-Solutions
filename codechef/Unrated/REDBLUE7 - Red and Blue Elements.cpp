# cook your dish here
T = int(input())

for i in range(T):
    N = int(input())
    A = list(map(int, input().split()))

    A.sort()

    total = sum(A)
    red_sum = 0
    answer = 0

    for r in range(1, N // 2 + 1):
        red_sum += A[N - r]

        blue_sum = total - red_sum

        CR = r
        CB = N - r

        value = red_sum * CB + blue_sum * CR

        answer = max(answer, value)

    print(answer)