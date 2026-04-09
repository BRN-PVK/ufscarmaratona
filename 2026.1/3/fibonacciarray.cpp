#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long fib[61];
    
    fib[0] = 0;
    fib[1] = 1;
    
    /* precomputa td p nao recalcular nda dps */
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int t;
    if (!(cin >> t)) return 0;

    /* responde cada query consultando o array salvo */
    while (t--) {
        int n;
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << "\n";
    }

    return 0;
}