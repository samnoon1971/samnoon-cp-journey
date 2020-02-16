#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        ll n, m;
        cin >> n >> m;
        vector <ll> a(n), b(n), c(n);
        for(ll i=0; i<n; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
        }
        ll flag = 0;
        ll cnt = 0;
        ll mx = m, mn = m;
        for(ll i=0; i<n; i++)
        {
             mx = mx + a[i] - cnt;
             mn = mn - a[i] + cnt;
            if(mx<b[i] || c[i]<mn)
            {
                flag++;
                break;
            }
            cnt = a[i];
            mx = min(mx, c[i]);
            mn = max(mn, b[i]);
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
