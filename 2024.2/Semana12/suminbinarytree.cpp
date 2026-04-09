#include <bits/stdc++.h>
using namespace std;

long long soma(long long n);

int main()
{
    int t;
    long long n;
    
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        cout << soma(n) << '\n';
    }

    return 0;
}

long long soma(long long n)
{
    long long sum = 0;

    while (n >= 1)
    {
        sum += n;
        n /= 2;
    }

    return sum;
}