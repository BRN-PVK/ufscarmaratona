#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, i;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<int> a(n);
        
        for (i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int menor = min_element(a.begin(), a.end()) - a.begin();
        int maior = max_element(a.begin(), a.end()) - a.begin();

        if (menor > maior)
        {
            swap(menor, maior);
        }

        int opesquerdo = maior + 1;
        int opdireito = n - menor;
        int opambos = (menor + 1) + (n - maior);

        int resultado = min({opesquerdo, opdireito, opambos});

        cout << resultado << endl;
    }

    return 0;
}