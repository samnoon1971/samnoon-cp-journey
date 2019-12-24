#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, c, r;
        cin >> a >> b >> c >> r;
        ll ax=min(a, b);
        ll bx=max(a, b);
        a=ax;
        b=bx;
        ll sum=0;
        ll x=c-r, y=c+r;
        if(y<a || x>b)
        {
            sum=b-a;
            cout << sum << endl;
            continue;
        }
        ll px=max(a, x);
        ll py=min(b, y);
          sum=px-a+b-py;
        cout << sum << endl;
    }
    return 0;
}
