#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll cnt=min(a/3, min(b/2, c/2));
    ll sum=cnt*7;
    a-=cnt*3;
    b-=cnt*2;
    c-=cnt*2;
    ll ar[7]={2, 1, 1, 2, 3, 1, 3}, res=0;
    for(ll i=0; i<7; i++)
    {
        ll x=a, y=b, z=c;
        ll k=0;
        for(ll j=0; j<7; j++)
        {
            if(ar[j]==1)
            {
                if(!x)
                    break;
                x--;
            }
            else if(ar[j]==2)
            {
                if(!y)
                    break;
                y--;
            }
            else
            {
                if(!z)
                    break;
                z--;
            }
            k++;
        }
        ll sum=ar[0];
        for(ll j=0; j<6; j++)
            ar[j]=ar[j+1];
        ar[6]=sum;
        res=max(res, k);
    }
    cout << sum+res << endl;
    return 0;
}
