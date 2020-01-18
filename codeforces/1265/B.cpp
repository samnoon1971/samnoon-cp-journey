#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
ll p[N];
int mark[N];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set <ll> sum;
        memset(p, 0, sizeof p);
        memset(mark, 0, sizeof mark);
        for(int i=1; i<=n; i++)
        {
            ll x;
            cin >> x;
            p[x] = i;
        }
        ll x=INT_MAX, y=INT_MIN;
        for(int i=1; i<=n; i++)
        {
           x=min(x, p[i]);
           y=max(y, p[i]);
           if(y-x+1==i)
            mark[i] = 1;
        }
        for(int i=1; i<=n; i++)
        {
            cout << mark[i];
        }
        cout << endl;
    }
    return 0;
}
