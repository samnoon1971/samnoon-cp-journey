#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll sum=0;
    if(e>=f)
    {
        sum=min(a, d);
        d-=sum;
        sum=sum*e+min(b, min(c, d))*f;
        cout << sum << endl;
    }
    else
    {
        sum=min(b, min(c, d));
        d-=sum;
        sum=sum*f+min(a, d)*e;
        cout << sum << endl;
    }
    return 0;
}
