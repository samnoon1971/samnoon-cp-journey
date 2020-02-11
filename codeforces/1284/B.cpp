#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5+10;
vector <ll> a, b;
int main()
{
    ll n;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        ll m;
        cin >> m;
        vector <ll> vec;
        while(m--)
        {
            ll x;
            cin >> x;
            vec.push_back(x);
        }
        if(is_sorted(vec.rbegin(), vec.rend()))
        {
            a.push_back(*vec.begin());
            b.push_back(*vec.rbegin());
        }
    }
    ll ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll k = 0, csum = 0;
    for(auto i:b)
    {
        while(k<a.size())
        {
            if(a[k]>i)
                break;
            ans++;
            k++;
        }
        csum += ans;
    }
    cout << n*n-csum << endl;
    return 0;
}
