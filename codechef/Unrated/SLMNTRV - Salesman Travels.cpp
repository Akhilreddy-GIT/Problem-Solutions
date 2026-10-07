# cook your dish here
import math

T = int(input())

for _ in range(T):
    N, K = map(int, input().split())

    remaining = list(range(1, N + 1))
    answer = []

    while len(remaining) >= 2:
        a = remaining[-1]
        found = False

        for i in range(len(remaining) - 2, -1, -1):
            b = remaining[i]

            product = a * b
            root = math.isqrt(product)

            if (abs(product - root * root) <= K or
                abs(product - (root + 1) * (root + 1)) <= K):

                answer.append(a)
                answer.append(b)

                remaining.pop()      # remove a
                remaining.pop(i)     # remove b

                found = True
                break

        if not found:
            break

    if len(remaining) == 1:
        answer.append(remaining[0])

    if len(answer) == N:
        print(*answer)
    else:
        print(-1)