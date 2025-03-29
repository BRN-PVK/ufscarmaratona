#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, a, b, c, i, x;
        cin >> n;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (i = 0; i < n; ++i)
        {
            cin >> x;
            pq.push(x);
        }
        
        while (pq.size() > 1)
        {
            a = pq.top();
            pq.pop();
            
            b = pq.top();
            pq.pop();
            
            c = (a + b) / 2;
            pq.push(c);
        }
        
        cout << pq.top() << '\n';
    }
    
    return 0;
}