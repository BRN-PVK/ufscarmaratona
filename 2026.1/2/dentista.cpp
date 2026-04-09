#include <bits/stdc++.h>
using namespace std;

struct Consulta {
    int ini, fim;
};

/* comp p/ ordenar pelo termino e liberar o dentista o + rapido possivel */
bool comp(Consulta a, Consulta b) {
    return a.fim < b.fim;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<Consulta> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].ini >> v[i].fim;
    }

    sort(v.begin(), v.end(), comp);

    int ans = 0;
    int livre = 0;

    for (int i = 0; i < n; i++) {
        /* se a prox consulta começa dps/igual a hr q ele ta livre, ele atende */
        if (v[i].ini >= livre) {
            ans++;
            livre = v[i].fim;
        }
    }

    cout << ans << "\n";

    return 0;
}