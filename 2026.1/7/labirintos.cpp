#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    
    while (T--) {
        int N, V, A;
        cin >> N >> V >> A;
        
        set<pair<int, int>> arestas_unicas;
        
        for (int i = 0; i < A; i++) {
            int u, v;
            cin >> u >> v;
            
            arestas_unicas.insert({min(u, v), max(u, v)});
        }
        
        cout << 2 * arestas_unicas.size() << endl;
    }
    
    return 0;
}   