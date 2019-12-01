#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a[3];
        for(ll i=0; i<3; i++)
        {
            cin >> a[i];
        }
        sort(a, a+3);
        if(a[0]+a[1]<=a[2])
        {
            cout << a[0] + a[1] << endl;
            continue;
        }
        a[2]-=a[0];
        ll sum=a[0];
        a[0]=0;
        ll cx=min(a[2], a[1]);
        a[2]-=cx;
        a[1]-=cx;
        cout << sum+cx+(a[0]+a[1]+a[2])/2 << endl;
    }
    return 0;
}
