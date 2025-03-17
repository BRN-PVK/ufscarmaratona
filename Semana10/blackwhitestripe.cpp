#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, i;
    string s;

    cin >> t;

    while (t--) {
        cin >> n >> k;
        cin >> s;

        int minimo = INT_MAX;
        int qtdPinturas = 0;

        for (i = 0; i < k; ++i)
        {
            if (s[i] == 'W') qtdPinturas++;
        }

        minimo = min(minimo, qtdPinturas);

        for (i = k; i < n; ++i)
        {
            if (s[i - k] == 'W') qtdPinturas--;
            if (s[i] == 'W') qtdPinturas++;
            
            minimo = min(minimo, qtdPinturas);
        }

        cout << minimo << '\n';
    }

    return 0;
}