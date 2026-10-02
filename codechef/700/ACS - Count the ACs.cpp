# cook your dish here
T = int(input())

for _ in range(T):
    P = int(input())

    hundreds = P // 100
    ones = P % 100

    if hundreds + ones <= 10:
        print(hundreds + ones)
    else:
        print(-1)