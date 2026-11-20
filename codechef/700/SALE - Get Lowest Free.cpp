# cook your dish here
def solve():
    T = int(input())
    for _ in range(T):
        a, b, c = map(int, input().split())
        
        prices = sorted([a, b, c])
        # prices[0] is free, pay for the other two
        print(prices[1] + prices[2])

solve()