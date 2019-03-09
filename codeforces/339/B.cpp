#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[m];
    for(ll i=0; i<m; i++)
        cin >> a[i];
    ll sum=0, cur=1;
    for(ll i=0; i<m; i++)
    {
        if(a[i]>cur)
        {
            sum+=a[i]-cur;
            cur=a[i];
        }
        else if(a[i]<cur)
        {
            sum+=n-cur+a[i];
            cur=a[i];
        }
    }
    cout << sum << endl;
}
