#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    
    cin >> n; 

    vector<int> cartas(n);
    
    for (i = 0; i < n; i++) cin >> cartas[i];

    int sereja = 0, dima = 0, esq = 0, dir = n - 1;
    
    bool turno = true;

    while (esq <= dir)
    {
        if (cartas[esq] >= cartas[dir])
        {
            if (turno)
            {
                sereja += cartas[esq];
            }
            else
            {
                dima += cartas[esq];
            }
            esq++;
        }
        else
        {
            if (turno)
            {
                sereja += cartas[dir];
            }
            else
            {
                dima += cartas[dir];
            }
            
            dir--;
        }
        turno = !turno;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}