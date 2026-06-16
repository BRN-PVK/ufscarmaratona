#include <bits/stdc++.h>

using namespace std;

void dfs(int u, const vector<vector<int>>& grafo, vector<bool>& visitado) {
    visitado[u] = true;
    for (int v : grafo[u]) {
        if (!visitado[v]) {
            dfs(v, grafo, visitado);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    
    while (cin >> n >> m && (n != 0 || m != 0)) {
        
        vector<vector<int>> adj(n + 1);
        vector<vector<int>> rev_adj(n + 1);

        for (int i = 0; i < m; i++) {
            int v, w, p;
            cin >> v >> w >> p;
            
            adj[v].push_back(w);
            rev_adj[w].push_back(v);
            
            if (p == 2) {
                adj[w].push_back(v);
                rev_adj[v].push_back(w);
            }
        }

        bool fortemente_conexo = true;
        vector<bool> visitado(n + 1, false);

        dfs(1, adj, visitado);
        for (int i = 1; i <= n; i++) {
            if (!visitado[i]) {
                fortemente_conexo = false;
                break;
            }
        }

        if (fortemente_conexo) {
            fill(visitado.begin(), visitado.end(), false);
            
            dfs(1, rev_adj, visitado);
            for (int i = 1; i <= n; i++) {
                if (!visitado[i]) {
                    fortemente_conexo = false;
                    break;
                }
            }
        }

        cout << (fortemente_conexo ? 1 : 0) << "\n";
    }

    return 0;
}