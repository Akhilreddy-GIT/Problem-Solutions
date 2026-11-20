# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    streak = 0
    hard = False

    for ch in s:
        if ch in "aeiou":
            streak = 0
        else:
            streak += 1
            if streak >= 4:
                hard = True
                break

    if hard:
        print("NO")
    else:
        print("YES")