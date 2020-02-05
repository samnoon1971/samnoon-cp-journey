#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        while(n)
        {
            if(n<10)
            {
                ans+=n;
                break;
            }
            ans += 10*(n/10);
            n=n/10+n%10;
        }
        cout << ans << endl;
    }
    return 0;
}
