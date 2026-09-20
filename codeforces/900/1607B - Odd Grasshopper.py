t = int(input())

for _ in range(t):
    x0, n = map(int, input().split())

    remaining = n % 4

    # Jump number of the first remaining jump
    start = n - remaining + 1

    position = x0

    for i in range(start, n + 1):
        if position % 2 == 0:
            position -= i
        else:
            position += i

    print(position)