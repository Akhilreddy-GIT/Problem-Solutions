# cook your dish here
t = int(input())

for _ in range(t):
    m, s = map(int, input().split())
    print(m // s)