# cook your dish here
T = int(input())

for _ in range(T):
    W, X, Y, Z = map(int, input().split())

    if W in [X, Y, Z, X+Y, X+Z, Y+Z, X+Y+Z]:
        print("YES")
    else:
        print("NO")