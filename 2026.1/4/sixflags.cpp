#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, T;
    int instancia = 1;
    
    while (cin >> N >> T && N != 0) {
        vector<int> dp(T + 1, 0);
        
        for (int i = 0; i < N; ++i) {
            int duracao, pontuacao;
            cin >> duracao >> pontuacao;
            
            for (int w = duracao; w <= T; ++w) {
                if (dp[w - duracao] + pontuacao > dp[w]) {
                    dp[w] = dp[w - duracao] + pontuacao;
                }
            }
        }
        
        cout << "Instancia " << instancia++ << "\n";
        cout << dp[T] << "\n\n";
    }
    
    return 0;
}