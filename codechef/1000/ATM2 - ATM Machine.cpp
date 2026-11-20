# cook your dish here
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    requests = list(map(int, input().split()))

    money_left = k
    result = ""

    for a in requests:
        if money_left >= a:
            money_left -= a
            result += "1"
        else:
            result += "0"

    print(result)