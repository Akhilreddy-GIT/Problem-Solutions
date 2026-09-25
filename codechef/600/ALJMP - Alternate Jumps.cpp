# cook your dish here
T = int(input())

for _ in range(T):
    N = int(input())

    position = N

    for i in range(1, N):
        jump = N - i

        if i % 2 == 1:
            position -= jump
        else:
            position += jump

    print(position)