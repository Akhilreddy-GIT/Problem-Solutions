# cook your dish here
t = int(input())

for _ in range(t):
    n = int(input())

    if n < 2:
        print("no")           # 0 and 1 are not prime
        continue

    is_prime = True
    for d in range(2, n):     # check 2, 3, 4, ..., n-1
        if n % d == 0:
            is_prime = False
            break             # found a divisor, no need to keep checking

    if is_prime:
        print("yes")
    else:
        print("no")