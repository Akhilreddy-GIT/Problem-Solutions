# cook your dish here
R, O, C = map(int, input().split())

max_score = C + (20 - O) * 6 * 6

if max_score > R:
    print("YES")
else:
    print("NO")