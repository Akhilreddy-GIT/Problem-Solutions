# cook your dish here
T = int(input())

for _ in range(T):
    X, Y = map(int, input().split())

    score1 = (500 - 2 * X) + (1000 - 4 * (X + Y))
    score2 = (1000 - 4 * Y) + (500 - 2 * (X + Y))

    print(max(score1, score2))