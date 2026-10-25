# cook your dish here
T = int(input())

for _ in range(T):
    A, B, X, Y = map(int, input().split())

    chef = A / X
    chefina = B / Y

    if chef < chefina:
        print("Chef")
    elif chef > chefina:
        print("Chefina")
    else:
        print("Both")