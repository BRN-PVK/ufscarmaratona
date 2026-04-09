#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    
    while (cin >> n) {
        int custo;
        cin >> custo;

        int max_lucro = 0;
        int lucro_atual = 0;

        for (int i = 0; i < n; i++) {
            int receita;
            cin >> receita;
            
            int lucro_dia = receita - custo;
            
            lucro_atual += lucro_dia;
            
            if (lucro_atual < 0) {
                lucro_atual = 0;
            }
            
            if (lucro_atual > max_lucro) {
                max_lucro = lucro_atual;
            }
        }

        cout << max_lucro << "\n";
    }

    return 0;
}