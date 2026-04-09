#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    ll imparMaior = 0;
    ll parMaior = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1 && a[i] > imparMaior) imparMaior = a[i];
        if (a[i] % 2 == 0 && a[i] > parMaior) parMaior = a[i];
    }
    
    int c = 0;
    
    bool mesmaParidade = true;
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            mesmaParidade = false;
            break;
        }
    }
    
    if(mesmaParidade)
    {
        cout << 0 << "\n";
        return;
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < imparMaior)
        {
            c++;
            a[i] = a[i] + imparMaior;
            imparMaior = max(imparMaior, a[i]);
        }
    }
    
    mesmaParidade = true;
    
    for (int i = 1; i < n; i++)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            mesmaParidade = false;
            break;
        }
    }
    
    if(mesmaParidade)
    {
        cout << c << "\n";
        return;
    }
    
    ll indexImparMaior = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1 && a[i] == imparMaior)
        {
            indexImparMaior = i;
            break;
        }
    }
    
    a[indexImparMaior] = imparMaior + parMaior;
    c++;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0) c++;
    }
    
    cout << c << "\n";
}

int main()
{
    ll t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }
    
    return 0;
}