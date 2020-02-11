#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;
ll a[N], b[N];
int main()
{
    ll n, m;
    cin >> n >> m;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(ll i=0; i<n; i++)
    {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);
    ll ans = 2e9;
    for(ll i=0; i<n; i++)
    {
        ll cnt = (b[i] - a[0] + m) % m;
        bool flag=true;
        for(ll j=0; j<n;  j++)
        {
            if(b[(i+j)%n] != (a[j]+cnt) % m)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
