# cook your dish here
t = int(input())                 # number of test cases

for _ in range(t):
    n = int(input())             # number of terms
    coeffs = list(map(int, input().split()))   # the coefficients

    # scan from the END backwards, stop at first non-zero
    for i in range(n - 1, -1, -1):
        if coeffs[i] != 0:
            print(i)             # i is the degree
            break