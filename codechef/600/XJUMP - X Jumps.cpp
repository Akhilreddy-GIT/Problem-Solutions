# cook your dish here
T = int(input())

for _ in range(T):
    X, Y = map(int, input().split())

    ans = X // Y + X % Y
    print(ans)