# cook your dish here
T = int(input())

for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))

    freq = [0] * 102

    for x in A:
        freq[x] += 1

    mex = 0
    while freq[mex] > 0:
        mex += 1

    moves = 0

    # Values below MEX:
    # Every extra copy of x can make x moves: x -> x-1 -> ... -> 0
    for x in range(1, mex):
        moves += (freq[x] - 1) * x

    # Values above MEX:
    # They can be reduced until mex + 1.
    for x in range(mex + 2, 101):
        moves += freq[x] * (x - mex - 1)

    if moves % 2:
        print("Alice")
    else:
        print("Bob")