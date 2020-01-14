#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, d;
        cin >> n >> d;
        if(d<=n)
        {
            cout << "YES" << endl;
            continue;
        }
        int flag=0;
        ll m = sqrt(d+1);
        while(m)
        {
            ll cnt = m + ceil(d/(m+1.0));
            if(cnt<=n)
            {
                flag++;
                break;
            }
            m--;
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;

}
