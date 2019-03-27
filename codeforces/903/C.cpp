#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    ll x;
    cin >> n;
    set <ll> s;
    multiset <ll> ms;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        s.insert(x);
        ms.insert(x);
    }
    int m=0;
    for(auto i:s)
    {
        int cnt=ms.count(i);
        m=max(cnt, m);
    }
    cout << m << endl;
    return 0;
}
