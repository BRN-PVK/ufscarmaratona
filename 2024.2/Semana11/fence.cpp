#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i;

    cin >> n >> k;

    vector<int> h(n);

    for (i = 0; i < n; ++i) cin >> h[i];

    vector<int> prefix(n + 1, 0);

    for (i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] + h[i];
    }

    int valorMinimo = INT_MAX;
    int aux = 0;


    for (i = 0; i <= n - k; ++i)
    {
        int soma = prefix[i + k] - prefix[i];

        if (soma < valorMinimo)
        {
            valorMinimo = soma;
            aux = i;
        }
    }

    cout << aux + 1 << endl;

    return 0;
}