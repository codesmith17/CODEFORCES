#include <iostream>
#include <vector>

using namespace std;

typedef long long LL;

const LL MOD = 998244353;
const int MAX_N = 300005;

int T, n, m;
int col[MAX_N];
LL mul[MAX_N];
bool isBipartite;
vector<int> graph[MAX_N];

void init() {
    for (int i = 1; i <= n; i++) {
        col[i] = -1;
        graph[i].clear();
    }
    isBipartite = true;
}

void DFS(int node, int color, int &odd, int &even) {
    col[node] = color;
    if (color == 1)
        odd++;
    else
        even++;

    for (int neighbor : graph[node]) {
        if (col[neighbor] == -1) {
            DFS(neighbor, 1 - color, odd, even);
        } else if (col[neighbor] == color) {
            isBipartite = false;
            return;
        }
    }
}

int main() {
    // Precompute powers of 2 modulo MOD
    mul[0] = 1;
    for (int i = 1; i < MAX_N; i++) {
        mul[i] = (mul[i - 1] * 2) % MOD;
    }

    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &n, &m);
        init();

        for (int i = 0; i < m; i++) {
            int u, v;
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        LL result = 1;
        for (int i = 1; i <= n && isBipartite; i++) {
            if (col[i] == -1) {
                int odd = 0, even = 0;
                DFS(i, 1, odd, even);
                result = (result * (mul[odd] + mul[even]) % MOD) % MOD;
            }
        }

        printf("%lld\n", isBipartite ? result : 0);
    }

    return 0;
}
