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
       ll x=INT_MAX, y=INT_MIN;
       ll ans=0;
       for(ll i=0; i<n; i++)
       {
           ll a, b;
           cin >> a >> b;
           x=min(x, b);
           y=max(y, a);
       }
       ans = max(ans, y-x);
       cout << ans << endl;
   }
   return 0;
}
