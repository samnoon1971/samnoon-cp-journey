#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n;
   cin >> n;
   ll a[n+1]={0}, b[n+1]={0}, c[n];
   for(ll i=0; i<n; i++)
   {
       cin >> c[i];
       a[i+1]+=a[i]+c[i];
   }
   sort(c, c+n);
   for(ll i=0; i<n; i++)
   {
       b[i+1]+=b[i]+c[i];
   }
   ll q;
   cin >> q;
   while(q--)
   {
       ll x, y, z;
       cin >> x >> y >> z;
       if(x==1)
        cout << a[z]-a[y-1] << endl;
       else
        cout << b[z]-b[y-1] << endl;
   }
   return 0;
}
