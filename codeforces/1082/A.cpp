#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ld x, y, n;
        ll m=LONG_MAX, d;
        cin >> n >> x >> y >> d;
        if((ll)(x-y)%d==0)
            m=min(m, (ll)(x-y)/d);
        if((ll)(y-1)%d==0)
            m=min(m, (ll)ceil((x-1)/d)+(ll)(y-1)/d);
        if((ll)(n-y)%d==0)
            m=min(m, (ll)ceil((n-x)/d)+(ll)(n-y)/d);
        if(m==LONG_MAX)
            cout << -1 << endl;
        else
            cout << abs(m) << endl;
    }
    return 0;
}
