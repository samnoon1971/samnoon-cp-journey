#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;
ll a[N], b[N];
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        for(ll i=1; i<=n; i++)
        {
            ll x;
            cin >> x;
            a[x] = i;
        }
        for(ll i=1; i<=m; i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
        ll cnt = LONG_MIN;
        for(ll i=1; i<=m; i++)
        {
            ll pos = b[i];
            if(a[pos]>cnt)
            {
                ans += 2*(a[pos]-i)+1;
                cnt = a[pos];
            }
            else if(a[pos]<cnt)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
