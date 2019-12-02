#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
ll a[N], b[N];
int main()
{
    ll n;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
        b[i]=x;
    }
    ll val=0, cnt=0;
    for(ll i=0; i<n; i++)
    {
        ll p=b[i];
        if(a[p]>val)
        {
            val=a[p];
            cnt=p;
        }
    }
    vector <pair<ll, pair<ll, ll> >  >v;
    for(ll i=0; i<n; i++)
    {
       if(b[i]==cnt)
       {
           val=i;
           break;
       }
    }
    for(ll j=val-1; j>=0; j--)
    {
        if(b[j]>b[j+1])
        {
            v.push_back({2, {j+1, j+2}});
            b[j]=b[j]-abs(b[j+1]-b[j]);
        }
        else if(b[j]<b[j+1])
        {
            v.push_back({1, {j+1, j+2}});
            b[j]=b[j]+abs(b[j+1]-b[j]);
        }
    }
    for(ll i=val+1; i<n; i++)
    {
        if(b[i]>b[i-1])
        {
            v.push_back({2, {i+1, i}});
            b[i]=b[i]-abs(b[i]-b[i-1]);
        }
        else if(b[i]<b[i-1])
        {
            v.push_back({1, {i+1, i}});
            b[i]=b[i]+abs(b[i]-b[i-1]);
        }
    }
    cout << v.size() << endl;
    for(auto i:v)
    {
        cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    }
    return 0;
}
