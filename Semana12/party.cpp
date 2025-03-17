#include <bits/stdc++.h>
using namespace std;

vector<int> adj[2001];
int depth[2001];

void dfs(int u);

int main()
{
    int n, p, i, max_depth = 0;
    cin >> n;

    vector<int> raizes;
    
    for (i = 1; i <= n; ++i)
    {
        cin >> p;
        
        if (p == -1)
        {
            raizes.push_back(i);
        }
        else
        {
            adj[p].push_back(i);
        }
    }

    for (int raiz : raizes)
    {
        depth[raiz] = 1;
        dfs(raiz);
    }

    for (i = 1; i <= n; ++i)
    {
        max_depth = max(max_depth, depth[i]);
    }

    cout << max_depth << endl;

    return 0;
}

void dfs(int u)
{
    for (int v : adj[u])
    {
        depth[v] = depth[u] + 1;
        dfs(v);
    }
}