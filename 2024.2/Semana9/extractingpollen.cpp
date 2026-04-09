#include <bits/stdc++.h>
using namespace std;
 
int somaDigitos(int num)
{
    int soma = 0;
    
    while (num > 0)
    {
        soma += num % 10;
        num /= 10;
    }
    
    return soma;
}
 
int main()
{
    int n, k, i, resultado, coletados;
    
    cin >> n >> k;
 
    vector<int> flores(n);
 
    for (i = 0; i < n; ++i) cin >> flores[i];
 
    sort(flores.begin(), flores.end(), greater<int>());
 
    resultado = 0;
 
    for (i = 1; i <= k; ++i)
    {
        if (flores.empty() || flores[0] == 0)
        {
            resultado = 0;
            break;
        }
 
        coletados = somaDigitos(flores[0]);
        resultado = coletados;
        flores[0] -= coletados;
 
        sort(flores.begin(), flores.end(), greater<int>());
    }
 
    cout << resultado << endl;
 
    return 0;
}