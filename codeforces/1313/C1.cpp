#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e4+10;
ll a[N], b[N], c[N];
ll solve(ll a[], ll n, ll index)
{
    ll x = index + 1, y = index - 1;
    ll sum = a[index];
    while(x<n)
    {
        a[x] = min(a[x], a[x-1]);
        sum += a[x++];
    }
    while(y>=0)
    {
        a[y] = min(a[y], a[y+1]);
        sum += a[y--];
    }
    return sum;
}
int main()
{
    ll n;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll res = 0;
    for(ll i=0; i<n; i++)
    {
        for(ll i=0; i<n; i++)
        {
            b[i] = a[i];
        }
        ll cnt = solve(b, n, i);
        if(cnt>res)
        {
            res = cnt;
            for(ll i=0; i<n; i++)
            {
                c[i] = b[i];
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}
