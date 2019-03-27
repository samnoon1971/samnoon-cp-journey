#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    ll m, x, y, sum=0;
    cin >> n >> m;
    priority_queue <pair<ll, ll> > pq;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        sum+=x;
        pq.push(make_pair(x-y, x));
    }
    ll cnt=0, k=0;
    while(cnt<=n)
    {
        if(sum<=m)
        {
            k=1;
            break;
        }
        if(pq.empty())
            break;
        ll a=pq.top().first, b=pq.top().second;
        sum=sum-a;
        pq.pop();
        cnt++;
    }
    if(k)
        cout << cnt << endl;
    else
        cout << -1 << endl;
    return 0;
}
