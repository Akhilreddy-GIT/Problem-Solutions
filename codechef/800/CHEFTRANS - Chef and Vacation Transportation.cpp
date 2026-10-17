# cook your dish here
t = int(input())

for _ in range(t):
    x, y, z = map(int, input().split())

    if x + y > z:
        print("TRAIN")
    elif x + y < z:
        print("PLANEBUS")
    else:
        print("EQUAL")