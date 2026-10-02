# cook your dish here
C, M, W, P, R = map(int, input().split())

score = C * M - W * P

if score >= R:
    print("YES")
else:
    print("NO")