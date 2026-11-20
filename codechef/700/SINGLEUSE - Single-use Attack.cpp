# cook your dish here
import math

def solve():
    T = int(input())
    for _ in range(T):
        H, X, Y = map(int, input().split())
        
        # Option 1: no special attack
        no_special = math.ceil(H / X)
        
        # Option 2: use special attack
        if Y >= H:
            with_special = 1
        else:
            with_special = 1 + math.ceil((H - Y) / X)
        
        print(min(no_special, with_special))

solve()