#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k, i, ouroAtual, qtdPessoas;
        
        ouroAtual = qtdPessoas = 0;
        
        cin >> n >> k;
        
        vector<int> a(n);
        
        for (i = 0; i < n; ++i) cin >> a[i];
        
        for (i = 0; i < n; ++i)
        {
            if (a[i] >= k)
            {
                ouroAtual += a[i];
            }
            else if (a[i] == 0)
            {
                if (ouroAtual > 0)
                {
                    ouroAtual--;
                    qtdPessoas++;
                }
            }
        }
        
        cout << qtdPessoas << '\n';
    }
    
    return 0;
}