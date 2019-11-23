#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
ll a[N], b[N];
int main()
{
    ll n, m;
    cin >> n >> m;
    for(ll i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for(ll i=1; i<=n; i++)
    {
        a[i]+=a[i-1];
        if(i>m)
            b[i]=a[i]+b[i-m];
        else
            b[i]=a[i];
        cout << b[i] << " ";
    }
    return 0;
}
