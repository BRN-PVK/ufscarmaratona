#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, click;
    bool l1,l2;
    l1 = false;
    l2 = false;

    cin >> n;

    for(int i=0 ; i < n; i++)
    {
        cin >> click;
        if(click == 1)
        {
            l1 = !l1;
        }
        if(click == 2)
        {
            l1 = !l1;
            l2 = !l2;
        }
    }

    cout << l1 << endl << l2 << endl;

    return 0;
}