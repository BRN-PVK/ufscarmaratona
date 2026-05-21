#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    
    while (cin >> N && N != 0) {
        int P;
        cin >> P;
        
        vector<int> dp(P + 1, 0);
        
        for (int i = 0; i < N; ++i) {
            int tempo, pizzas;
            cin >> tempo >> pizzas;
            
            for (int w = P; w >= pizzas; --w) {
                if (dp[w - pizzas] + tempo > dp[w]) {
                    dp[w] = dp[w - pizzas] + tempo;
                }
            }
        }
        
        cout << dp[P] << " min.\n";
    }
    
    return 0;
}