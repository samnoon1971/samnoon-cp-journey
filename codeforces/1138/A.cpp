#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    ll x=a[0], c1=1, c2=0, sum=1;
    for(int i=1; i<n; i++)
    {
        if(a[i]==x)
        {
            c1++;
            sum=max(sum, min(c1, c2));
        }
        else
        {
            x=a[i];
            sum=max(sum, min(c1, c2));
            c2=c1;
            c1=1;
        }
    }
    cout << 2*sum << endl;
    return 0;
}
