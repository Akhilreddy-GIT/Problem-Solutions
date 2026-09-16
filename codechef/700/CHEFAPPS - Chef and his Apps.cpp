# cook your dish here
T = int(input())

for _ in range(T):
    S, X, Y, Z = map(int, input().split())

    if S - X - Y >= Z:
        print(0)
    elif S - X >= Z:
        print(1)
    else:
        print(2)