t = int(input())

for _ in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))

    previous = 0
    maximum = 0

    for station in a:
        distance = station - previous
        maximum = max(maximum, distance)
        previous = station

    last_distance = 2 * (x - previous)
    maximum = max(maximum, last_distance)

    print(maximum)