# cook your dish here
def solve():
    T = int(input())
    for _ in range(T):
        A, B, K = map(int, input().split())
        
        distance = abs(A - B)
        
        # Ceiling division: (distance + K - 1) // K
        steps = (distance + K - 1) // K
        
        print(steps)

solve()