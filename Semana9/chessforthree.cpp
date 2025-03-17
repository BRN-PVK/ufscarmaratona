#include<bits/stdc++.h>
using namespace std;

bool check(int arr[])
{
    int contador = 0;

    for(int i = 0;i < 3;i++)
    {
        if(arr[i] == 0) contador++;
    }

    if(contador >= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int arr[3];

        for(int i = 0; i < 3; i++) cin >> arr[i];

        int empates = 0;

        while(check(arr) != 1)
        {
            sort(arr,arr+3);
            arr[1]--;
            arr[2]--;
            empates++;
        }

        if((arr[0] + arr[1] + arr[2])% 2 != 0) cout << -1 << endl;

        if((arr[0] + arr[1] + arr[2])% 2 == 0) cout << empates << endl;
    }

    return 0;
}