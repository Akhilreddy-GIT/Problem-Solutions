# cook your dish here
T = int(input())

for _ in range(T):
    A, X, B, Y = map(int, input().split())

    if A * Y > B * X:
        print("ALICE")
    elif A * Y < B * X:
        print("BOB")
    else:
        print("EQUAL")