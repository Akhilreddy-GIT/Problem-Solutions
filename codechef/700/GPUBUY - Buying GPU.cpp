# cook your dish here
T = int(input())

for _ in range(T):
    X, Y, Z = map(int, input().split())

    if Y >= Z:
        print(-1)
        continue

    price = X
    money = 0
    months = 0

    while money < price:
        price += Y
        money += Z
        months += 1

    print(months)