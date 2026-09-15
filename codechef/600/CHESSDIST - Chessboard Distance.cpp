# cook your dish here
t = int(input())

for i in range(t):
    x1, y1, x2, y2 = map(int, input().split())

    x_distance = abs(x1 - x2)
    y_distance = abs(y1 - y2)

    distance = max(x_distance, y_distance)

    print(distance)