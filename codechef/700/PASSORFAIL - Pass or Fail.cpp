# cook your dish here
T = int(input())

for _ in range(T):
    N, X, P = map(int, input().split())

    score = 3 * X - (N - X)

    if score >= P:
        print("PASS")
    else:
        print("FAIL")