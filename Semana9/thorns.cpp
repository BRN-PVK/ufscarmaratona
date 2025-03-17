#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    string caminho;
    
    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> caminho;

        vector<int> dp(n, -1);
        dp[0] = 0;

        for (int i = 0; i < n; ++i)
        {
            if (dp[i] == -1) continue;

            if (i + 1 < n && caminho[i + 1] != '*')
            {
                if (caminho[i + 1] == '@')
                {
                    dp[i + 1] = max(dp[i + 1], dp[i] + 1);
                }
                else
                {
                    dp[i + 1] = max(dp[i + 1], dp[i]);
                }
            }

            if (i + 2 < n && caminho[i + 2] != '*')
            {
                if (caminho[i + 2] == '@')
                {
                    dp[i + 2] = max(dp[i + 2], dp[i] + 1);
                }
                else
                {
                    dp[i + 2] = max(dp[i + 2], dp[i]);
                }
            }
        }

        int max_moedas = 0;
        
        for (int i = 0; i < n; ++i)
        {
            if (dp[i] != -1)
            {
                max_moedas = max(max_moedas, dp[i]);
            }
        }

        cout << max_moedas << endl;
    }

    return 0;
}