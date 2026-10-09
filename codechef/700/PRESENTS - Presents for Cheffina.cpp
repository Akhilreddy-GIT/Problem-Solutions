# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    cost = n - (n // 5)
    print(cost)