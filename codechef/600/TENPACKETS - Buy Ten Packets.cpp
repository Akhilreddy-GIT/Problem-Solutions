# cook your dish here
T = int(input())

for _ in range(T):
    X, Y = map(int, input().split())

    print(min(5 * X, 2 * Y + X))