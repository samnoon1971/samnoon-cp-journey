#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    if(n%2)
    {
        ll r=sqrt(n+.0)+2;
        for(ll i=3; i<=r; i++)
        {
            if(n%i==0)
            {
                cout << 1+(n-i)/2 << endl;
                return 0;
            }
        }
        cout << 1 << endl;
    }
    else
        cout << n/2 << endl;
    return 0;
}
