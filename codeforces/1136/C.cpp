#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m], b[n][m];
    multiset <ll> ax[n+m], bx[n+m];
    for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
           {
               cin >> a[i][j];
               ax[i+j].insert(a[i][j]);
           }
        }
    for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
           {
               cin >> b[i][j];
               bx[i+j].insert(b[i][j]);
           }
        }
    for(ll i=0; i<n+m; i++)
    {
        if(ax[i].empty() || bx[i].empty())
            continue;
        if(ax[i]!=bx[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
