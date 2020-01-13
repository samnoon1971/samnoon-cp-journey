#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x;
    cin >> x;
    ll d=sqrt(x+2);
    while(d)
    {
        if(x%d)
            d--;
        else
        {
            if(__gcd(d, x/d)==1)
            {
                cout << min(d, x/d) << " " << max(d, x/d) << endl;
                return 0;
            }
            else
                d--;
        }
    }
    return 0;
}
