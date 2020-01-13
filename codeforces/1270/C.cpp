#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a=0, b=0;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            a+=x;
            b^=x;
        }
        cout << 2 << endl << b << " " << a+b << endl;
    }
    return 0;
}
