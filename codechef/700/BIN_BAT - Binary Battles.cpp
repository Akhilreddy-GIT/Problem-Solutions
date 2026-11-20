# cook your dish here
T = int(input())
for _ in range(T):
    N, A, B = map(int, input().split())
    
    rounds = N.bit_length() - 1       # log2(N)
    total = rounds * A + (rounds - 1) * B
    print(total)