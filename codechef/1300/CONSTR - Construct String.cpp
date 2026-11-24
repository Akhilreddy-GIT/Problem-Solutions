# cook your dish here
import sys

def solve():
    input_data = sys.stdin.read().split()
    t = int(input_data[0])
    idx = 1
    results = []
    for _ in range(t):
        n = int(input_data[idx]); idx += 1
        u = input_data[idx]; idx += 1
        s = []
        i = 0
        while i < n:
            j = i
            while j < n and u[j] == u[i]:
                j += 1
            length = j - i
            if length % 2 == 1:
                s.append(u[i])
            else:
                s.append(u[i])
                s.append(u[i])
            i = j
        results.append(''.join(s))
    sys.stdout.write('\n'.join(results))

if __name__ == "__main__":
    solve()