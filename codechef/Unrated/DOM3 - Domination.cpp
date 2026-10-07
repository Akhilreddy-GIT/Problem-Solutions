# cook your dish here
T = int(input())

for _ in range(T):
    N = int(input())

    adj = [[] for _ in range(N)]

    for _ in range(N - 1):
        u, v = map(int, input().split())
        u -= 1
        v -= 1

        adj[u].append(v)
        adj[v].append(u)

    degree = [len(adj[i]) for i in range(N)]

    # Number of leaves
    leaves = 0

    # leaf_neighbours[i] = number of leaf neighbours of i
    leaf_neighbours = [0] * N

    for i in range(N):
        if degree[i] == 1:
            leaves += 1

    for i in range(N):
        for v in adj[i]:
            if degree[v] == 1:
                leaf_neighbours[i] += 1

    # Bad triples containing a leaf + its neighbour
    bad = leaves * (N - 2)

    # Remove double counting
    for i in range(N):
        x = leaf_neighbours[i]
        bad -= x * (x - 1) // 2

    # Bad triples formed by a degree-2 vertex
    for i in range(N):
        if degree[i] == 2:
            u = adj[i][0]
            v = adj[i][1]

            # If either neighbour is a leaf,
            # this triple was already counted above.
            if degree[u] != 1 and degree[v] != 1:
                bad += 1

    total = N * (N - 1) * (N - 2) // 6

    print(total - bad)