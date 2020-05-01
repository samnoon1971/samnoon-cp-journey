#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x = 0, y = pow(2, n);
        for(int i=1; i<=n/2-1; i++)
        {
            y += pow(2, i);
        }
        for(int i=n/2; i<n; i++)
        {
            x += pow(2, i);
        }
        cout << abs(y-x) << endl;

    }
    return 0;

}
