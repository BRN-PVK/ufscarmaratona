#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        string s;

        cin >> n >> s;
        
        int esquerda = 0, direita = n - 1;

        while (esquerda < direita)
        {
            if ((s[esquerda] == '0' && s[direita] == '1') || (s[esquerda] == '1' && s[direita] == '0'))
            {
                esquerda++;
                direita--;
            }
            else
            {
                break;
            }
        }
        
        cout << (direita - esquerda + 1) << endl;
    }

    return 0;
}