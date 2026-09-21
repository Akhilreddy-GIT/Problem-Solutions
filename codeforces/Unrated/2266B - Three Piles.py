t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())

    if a >= b:
        print(a - b + c)
    else:
        d = b - a
        print(max(d, abs(c - d)))