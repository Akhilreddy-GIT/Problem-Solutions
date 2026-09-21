# cook your dish here
X, Y = map(int, input().split())

perimeter = 2 * (X + Y)

if perimeter >= 1000:
    print("YES")
else:
    print("NO")