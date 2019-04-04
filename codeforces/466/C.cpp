#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
     ll n;
     cin >> n;
     ll a[n], sum=0;
     for(ll i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
     if(sum%3)
     {
         cout << 0 << endl;
         return 0;
     }
     sum/=3;
     ll cnt=0, psum[n];
     for(ll i=n-1; i>=0; i--)
     {
         cnt+=a[i];
         if(cnt==sum)
            psum[i]=1;
         else
            psum[i]=0;
     }
     for(ll i=n-2; i>=0; i--)
     {
         psum[i]+=psum[i+1];
     }
     ll ans=0;
     cnt=0;
     for(ll i=0; i<n-2; i++)
     {
         ans+=a[i];
         if(ans==sum)
            cnt+=psum[i+2];
     }
     cout << cnt << endl;
     return 0;
}
