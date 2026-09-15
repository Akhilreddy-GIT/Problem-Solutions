# cook your dish here
t = int(input())

for i in range(t):
    p, q = map(int, input().split())

    if (p + q) // 2 % 2 == 0:
        print("Alice")
    else:
        print("Bob")