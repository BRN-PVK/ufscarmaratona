#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, l, r, i;

    cin >> n >> q;

    vector<long long> a(n);
    
    for (i = 0; i < n; ++i) cin >> a[i];

    vector<long long> freq(n + 2, 0);

    while (q--)
    {
        cin >> l >> r;
        
        freq[l]++;
        freq[r + 1]--;
    }

    for (i = 1; i <= n; ++i)
    {
        freq[i] += freq[i - 1];
    }

    sort(a.begin(), a.end(), greater<long long>());
    sort(freq.begin() + 1, freq.begin() + n + 1, greater<long long>());

    long long soma = 0;
    
    for (i = 0; i < n; ++i)
    {
        soma += a[i] * freq[i + 1];
    }

    cout << soma << '\n';

    return 0;
}