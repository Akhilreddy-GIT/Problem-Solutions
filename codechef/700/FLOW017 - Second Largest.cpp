# cook your dish here
T = int(input())

for _ in range(T):
    A, B, C = map(int, input().split())

    arr = [A, B, C]
    arr.sort()

    print(arr[1])