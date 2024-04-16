#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m = 0;

    do
    {
        cin >> n;
        if(n > m)
        {
            m = n;
        }
    } while (n != 0);

    cout << m;

    return 0;
}