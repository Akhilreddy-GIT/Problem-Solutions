# cook your dish here
t = int(input())

for _ in range(t):
    a, b = map(int, input().split())

    diff = a - b

    if diff >= 10:
        print(0)
    else:
        r = 10 - diff
        print((r + 2) // 3)