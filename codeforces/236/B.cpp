#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1000001];
#define MOD 1073741824
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll m=max(a, max(b, c));
    ll sum=0;
    for(ll i=1; i<=a; i++)
    for(ll j=1; j<=b; j++)
    for(ll k=1; k<=c; k++)
        {
            ll cnt=i*j*k, idx=1;
            if(f[cnt])
            {
                sum+=f[cnt];
                continue;
            }
            int cp=0, r=sqrt(cnt);
            for(int l=1; l<=r; l++)
            {
                if(cnt%l==0)
                {
                    if(cnt/l==l)
                        cp++;
                    else
                        cp+=2;
                }
            }
            f[cnt]=cp;
            sum+=f[cnt];
        }
    cout << sum%MOD << endl;
    return 0;
}
