#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    string s;
    
    cin >> t;

    while (t--)
    {
        cin >> s;
        
        n = s.length();

        vector<int> prefix0(n + 1, 0);
        vector<int> prefix1(n + 1, 0);

        for (i = 0; i < n; ++i)
        {
            prefix0[i + 1] = prefix0[i] + (s[i] == '0');
            prefix1[i + 1] = prefix1[i] + (s[i] == '1');
        }

        int opMinimas = INT_MAX;

        for (int divisoes = 0; divisoes <= n; ++divisoes)
        {
            int caso1 = prefix1[divisoes] + (prefix0[n] - prefix0[divisoes]);
            int caso2 = prefix0[divisoes] + (prefix1[n] - prefix1[divisoes]);
            int opAtual = min(caso1, caso2);

            if (opAtual < opMinimas) opMinimas = opAtual;
        }

        int tudo0= prefix1[n];
        int tudo1= prefix0[n];

        opMinimas = min(opMinimas, min(tudo0, tudo1));

        cout << opMinimas << '\n';
    }

    return 0;
}