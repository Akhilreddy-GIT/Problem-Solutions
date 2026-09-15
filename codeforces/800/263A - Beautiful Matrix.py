row = 0
column = 0

for i in range(5):
    arr = list(map(int, input().split()))

    for j in range(5):
        if arr[j] == 1:
            row = i + 1
            column = j + 1

answer = abs(row - 3) + abs(column - 3)

print(answer)