# cook your dish here
T = int(input())

for _ in range(T):
    X, Y, R = map(int, input().split())

    total_sticks = X + R // 30

    plates = (total_sticks + Y - 1) // Y

    print(plates)