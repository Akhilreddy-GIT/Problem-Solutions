# cook your dish here
N = int(input())

arr = []

for _ in range(N):
    arr.append(int(input()))

arr.sort()

for x in arr:
    print(x)