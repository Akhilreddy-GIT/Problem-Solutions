def solve():
    T = int(input())
    for _ in range(T):
        N = int(input())
        A = list(map(int, input().split()))
        
        if N % 2 != 0:
            print(-1)
        else:
            S = sum(A)          # or: p - m
            print(abs(S) // 2)

solve()