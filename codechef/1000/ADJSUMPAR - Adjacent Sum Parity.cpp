# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))

    ones = 0
    for x in b:
        if x == 1:
            ones += 1

    if ones % 2 == 0:
        print("YES")
    else:
        print("NO")