# cook your dish here
T=int(input())

for _ in range(T):
    N=int(input())
    A = input()
    B = input()

    if A.count('1') % 2 == B.count('1') % 2:
        print("YES")
    else:
        print("NO")