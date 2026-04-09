#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    
    while (cin >> n) {
        cout << n << "\n";

        int notas[] = {100, 50, 20, 10, 5, 2, 1};

        for (int nota : notas) {
            int qtd = n / nota;
            cout << qtd << " nota(s) de R$ " << nota << ",00\n";
            n %= nota; 
        }
    }

    return 0;
}