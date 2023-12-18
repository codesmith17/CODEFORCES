def dfs(u, p, leaf):
    for v in adj[u]:
        if v != p:
            dfs(v, u, leaf)
            leaf[u] += leaf[v]

    if leaf[u] == 0:
        leaf[u] = 1


for i in range(int(input())):
    n = int(input())
    adj = [[] for _ in range(n)]

    for _ in range(n-1):
        u, v = map(int, input().split())
        adj[u-1].append(v-1)
        adj[v-1].append(u-1)

    leaf = [0] * n
    dfs(0, -1, leaf)

    for _ in range(int(input())):
        u, v = map(lambda x: int(x)-1, input().split())
        print(leaf[u]*leaf[v])
