#include <bits/stdc++.h>

using namespace std;

void rotacionar(int matriz[50][50], int n) {
    int temp[50][50], i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            temp[n - j - 1][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = temp[i][j];
        }
    }
}

bool verificaLinha(int matriz[50][50], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (matriz[i][j] <= matriz[i][j - 1]) {
                return false;
            }
        }
    }

    return true;
}

bool verificaColuna(int matriz[50][50], int n) {
    int i, j;
    for (j = 0; j < n; j++) {
        for (i = 1; i < n; i++) {
            if (matriz[i][j] <= matriz[i - 1][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n, i, j, r;
    
    cin >> n;

    int matriz[50][50];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    for (r = 0; r < 4; r++) {
        if (verificaLinha(matriz, n) && verificaColuna(matriz, n)) {
            cout << r;
            
            return 0;
        }

        rotacionar(matriz, n);
    }

    return 0;
}
