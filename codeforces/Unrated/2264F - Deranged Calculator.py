N = 50
L = 4

dp = [[None] * L for _ in range(N + 1)]


def upd(l, n, s):
    if dp[n][l] is None or len(s) < len(dp[n][l]):
        dp[n][l] = s


# Build small constants i * n^j
for i in range(1, L):
    upd(i, 1, 'n' + (i - 1) * '*n')


def parens(s):
    if len(s) > 1:
        return '(' + s + ')'
    return s


# Find short expressions for constants 1..50
for _ in range(N):
    for l1 in range(L):
        for l2 in range(L):
            for i in range(1, N + 1):
                for j in range(1, N + 1):

                    if dp[i][l1] is None or dp[j][l2] is None:
                        continue

                    a = dp[i][l1]
                    b = dp[j][l2]

                    # subtraction
                    if i < j and l1 == l2:
                        upd(l1, j - i, b + '-' + parens(a))

                    # addition
                    if i + j <= N and l1 == l2:
                        upd(l1, i + j, a + '+' + b)

                    # multiplication
                    if i * j <= N and l1 + l2 < L:
                        upd(
                            l1 + l2,
                            i * j,
                            parens(a) + '*' + parens(b)
                        )

                    # division
                    if i % j == 0 and l1 - l2 >= 0:
                        upd(
                            l1 - l2,
                            i // j,
                            parens(a) + '/' + parens(b)
                        )


def make_program():
    k = int(input())

    if k == 2:
        print("n-n/n")
        return

    if k == 3:
        print("n-n/n")
        return

    # Construct approximation of e:
    #
    # e = 1 + 1/1! + 1/2! + ... + 1/50!
    #
    # Written in nested form to save characters.
    e = "n/n"

    for i in range(N, 0, -1):
        e = f"n/n+n/({dp[i][1]})*({e})"

    # [n >= i]
    #
    # round(n / (n + i))
    #
    # is 0 when n < i
    # and 1 when n >= i.
    def geq(i):
        return f"round(n/({dp[i][0]}+n))"

    # Construct n!
    #
    # Start with 1.
    # For every j:
    #
    # j * [n >= j] + 1
    #
    # gives j when n >= j,
    # otherwise 1.
    fact = "n/n"

    for j in range(2, N + 1):
        fact += (
            f"*("
            f"{geq(j)}*({dp[j - 1][0]})"
            f"+n/n"
            f")"
        )

    # D_n = round(n! / e)
    ans = f"round({fact}/({e}))"

    print(ans)


make_program()