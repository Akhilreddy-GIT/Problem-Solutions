# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    # count frequencies
    freq = {}
    for x in a:
        freq[x] = freq.get(x, 0) + 1

    # check if any count is 3 or more
    valid = True
    for count in freq.values():
        if count > 2:
            valid = False
            break

    if valid:
        print("Yes")
    else:
        print("No")