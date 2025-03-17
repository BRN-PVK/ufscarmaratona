#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200001];
vector<int> caminho;

bool dfs(int u, int destino, vector<int>& caminho);

int main()
{
    int n, p, i;
    cin >> n;

    for (i = 2; i <= n; ++i)
    {
        cin >> p;
        adj[p].push_back(i);
    }

    dfs(1, n, caminho);

    for (int node : caminho)
    {
        cout << node << " ";
    }
    
    cout << endl;

    return 0;
}

bool dfs(int u, int destino, vector<int>& caminho)
{
    caminho.push_back(u);
    
    if (u == destino)
    {
        return true;
    }
    
    for (int v : adj[u])
    {
        if (dfs(v, destino, caminho))
        {
            return true;
        }
    }
    
    caminho.pop_back();
    
    return false;
}