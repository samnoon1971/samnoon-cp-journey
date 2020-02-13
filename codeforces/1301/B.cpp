#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void debug_T(ll a[], ll n)
{
    for(int i=0; i<n-1; i++)
    {
        cout << abs(a[i]-a[i+1]) << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        ll x = LONG_MIN;
        ll y = LONG_MAX;
        for(int i=0; i<n; i++)
        {
            if(i>0 && a[i]==-1 && a[i-1]!=-1)
            {
                x = max(x, a[i-1]);
                y = min(y, a[i-1]);
            }
            if(i<n-1 && a[i]==-1 && a[i+1]!=-1)
            {
                x = max(x, a[i+1]);
                y = min(y, a[i+1]);
            }
        }
        //debug_T(a, n);
        ll p = 0;
        ll q = (x+y)/2;
        for(int i=0; i<n; i++)
        {
            if(a[i]==-1)
                a[i] = q;
        }
        for(int i=0; i<n-1; i++)
        {
            p = max(p, abs(a[i]-a[i+1]));
        }
        cout << p << " " << q << endl;
    }
    return 0;
}
