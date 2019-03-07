#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define m 100001
ll a[m];
ll f[m];
int main()
{
    ll n, x;
    cin >> n;
    for(ll i=0; i<n; i++)
        {
            cin >> x;
            a[x]++;
        }
    f[0]=0;
    f[1]=a[1];
    for(ll i=2; i<m; i++)
    {
        f[i]=max(f[i-1], f[i-2]+a[i]*i);
    }
    cout << f[m-1] << endl;
    return 0;
}
