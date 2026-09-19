# cook your dish here
T = int(input())

for _ in range(T):
    X = int(input())

    if X % 5 != 0:
        print(-1)
    else:
        coins = X // 5
        answer = coins // 2 + coins % 2
        print(answer)