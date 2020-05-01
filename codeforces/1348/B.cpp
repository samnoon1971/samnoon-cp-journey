#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e4+1;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        vector <ll> vec(n);
        set <ll> ms;
        for(ll i=0; i<n; i++)
        {
            cin >> vec[i];
            ms.insert(vec[i]);
        }
        ll p = ms.size();
        if(p>k)
        {
            cout << -1 << endl;
            continue;
        }
        cout << n*k << endl;
        for(ll i=0; i<n; i++)
        {
            for(auto j:ms)
            {
                cout << j << " ";
            }
            for(ll j=0; j<k-p; j++)
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
