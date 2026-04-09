#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, i;
    string s;
    
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        cin >> s;

        int op = 0;
        
        for (i = 0; i < n; )
        {
            if (s[i] == 'B')
            {
                op++;
                i += k;
            }
            else
            {
                i++;
            }
        }

        cout << op << '\n';
    }

    return 0;
}