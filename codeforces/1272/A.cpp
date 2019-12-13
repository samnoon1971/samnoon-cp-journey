#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll q;
    cin >> q;
    while(q--)
    {
        ll a[3];
        for(ll i=0; i<3; i++)
            cin >> a[i];
        sort(a, a+3);
        if(a[1]-a[0]==a[2]-a[1])
        {
            if(a[1]-a[0])
            {
                a[0]++;
                a[2]--;
            }
        }
        else
        {
            if(a[2]>a[1])
                {
                    a[2]--;
                   if(a[1]>a[0])
                     a[0]++;
                   else
                   {
                       if(a[1]<a[2])
                       {
                           a[0]++;
                           a[1]++;
                       }
                   }
                }
            else
            {
                a[2]--;
                a[1]--;
                if(a[1]>a[0])
                a[0]++;
            }
        }
        ll sum=0;
        for(ll i=0; i<3; i++)
        {
            for(ll j=i+1; j<3; j++)
            {
                sum+=abs(a[j]-a[i]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
