#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
ll a[N], b[N], c[N];
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i=1; i<=n; i++)
    {
        b[i] = b[i-1] | a[i];
    }
    for(int i=n; i>=1; i--)
    {
        c[i] = c[i+1] | a[i];
    }
    ll x=0, y=0;
    for(int i=1; i<=n; i++)
    {
        ll px = b[i-1], py = c[i+1], pz = a[i];
        if(x<=((~(px|py)) & pz))
        {
            x = pz & (~(px|py));
            y = i;
        }
    }
    swap(a[y], a[1]);
    for(int i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
