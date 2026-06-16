#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long t;
    
    if (cin >> n >> t) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int esquerda = 0;
        long long tempo_atual = 0;
        int max_livros = 0;

        for (int direita = 0; direita < n; direita++) {
            tempo_atual += a[direita];

            while (tempo_atual > t) {
                tempo_atual -= a[esquerda];
                esquerda++;
            }

            int livros_na_janela = direita - esquerda + 1;
            max_livros = max(max_livros, livros_na_janela);
        }

        cout << max_livros << "\n";
    }

    return 0;
}