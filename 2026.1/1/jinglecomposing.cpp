#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int valor[999] = {0};
    
    /* mapeio um valor pra cada em denominador 64 pra nao ter problema com float */
    valor['W'] = 64;
    valor['H'] = 32;
    valor['Q'] = 16;
    valor['E'] = 8;
    valor['S'] = 4;
    valor['T'] = 2;
    valor['X'] = 1;

    string s;
    
    /* recebe os valores, se = 64 adiciona um ponto e redefine a variavel soma,
    verifica quando chega / e para de verificar quando recebe "*" */
    
    while (cin >> s && s != "*") {
        int soma = 0, pontos = 0;

        for (char c : s) {
            if (c == '/') {
                if (soma == 64) pontos++;
                soma = 0;
            } else {
                soma += valor[c];
            }
        }

        cout << pontos << "\n";
    }

    return 0;
}