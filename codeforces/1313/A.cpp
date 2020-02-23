#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0;
        if(a)
        {
            sum++;
            a--;
        }
        if(b)
        {
            sum++;
            b--;
        }
        if(c)
        {
            sum++;
            c--;
        }
        int x = a, y = b, z = c;
        a = max(x, max(y, z));
        c = min(x, min(y, z));
        b = x+y+z - a - c;
        if(a && b)
        {
            sum++;
            a--;
            b--;
        }
        if(a && c)
        {
            sum++;
            a--;
            c--;
        }
        if(b && c)
        {
            sum++;
            b--;
            c--;
        }
        if(a && b && c)
        {
            sum++;
        }
        cout << sum << endl;
    }
    return 0;
}
