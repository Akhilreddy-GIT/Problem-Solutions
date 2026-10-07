T = int(input())

for _ in range(T):
    N = int(input())
    S = input().strip()

    possible = False

    for i in range(N):
        if S[i] == 'U':
            new = 'D'
        elif S[i] == 'D':
            new = 'U'
        elif S[i] == 'L':
            new = 'R'
        else:
            new = 'L'

        x = 0
        y = 0

        for j in range(N):
            ch = new if i == j else S[j]

            if ch == 'U':
                y += 1
            elif ch == 'D':
                y -= 1
            elif ch == 'L':
                x -= 1
            else:
                x += 1

        if x == 0 and y == 0:
            possible = True
            break

    print("YES" if possible else "NO")