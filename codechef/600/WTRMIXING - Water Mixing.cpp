# cook your dish here
t = int(input())

for i in range(t):
    a, b, x, y = map(int, input().split())

    if a == b:
        print("YES")
    elif b > a:
        if x >= b - a:
            print("YES")
        else:
            print("NO")
    else:
        if y >= a - b:
            print("YES")
        else:
            print("NO")