# cook your dish here
n = int(input())
sum1 = sum2 = 0
max_lead = 0
winner = 0

for _ in range(n):
    s, t = map(int, input().split())
    sum1 += s
    sum2 += t
    lead = abs(sum1 - sum2)
    if lead > max_lead:
        max_lead = lead
        winner = 1 if sum1 > sum2 else 2

print(winner, max_lead)