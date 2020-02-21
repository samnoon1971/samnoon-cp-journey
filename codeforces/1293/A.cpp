#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, s, k;
        cin >> n >> s >> k;
        set <ll> ms;
        for(ll i=0; i<k; i++)
        {
            ll x;
            cin >> x;
            ms.insert(x);
        }
        ll sum = 0;
        for(ll j=0; j<=k; j++)
        {
            ll p = s + j, q = s - j;
            if(ms.find(p)==ms.end())
            {
                if(p>=1 && p<=n)
                    {
                        sum = j;
                        break;
                    }
            }
            if(ms.find(q)==ms.end())
            {
                if(q>=1 && q<=n)
                    {
                        sum = j;
                        break;
                    }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
