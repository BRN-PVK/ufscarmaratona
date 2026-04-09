#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i;
    
    cin >> n;

    vector<long long> v(n);
    
    for (i = 0; i < n; ++i) cin >> v[i];

    vector<long long> prefix(n + 1, 0);
    
    for (i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] + v[i];
    }

    vector<long long> vOrdenados = v;
    sort(vOrdenados.begin(), vOrdenados.end());

    vector<long long> prefixOrdenado(n + 1, 0);
    
    for (i = 0; i < n; ++i)
    {
        prefixOrdenado[i + 1] = prefixOrdenado[i] + vOrdenados[i];
    }

    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << prefix[r] - prefix[l - 1] << '\n';
        }
        else
        {
            cout << prefixOrdenado[r] - prefixOrdenado[l - 1] << '\n';
        }
    }

    return 0;
}