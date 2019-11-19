#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll c=abs(a-b);
        ll res=0;

        if(c==0)
        {
            cout << 0 << endl;
            continue;
        }

        while(c>=5 && c)
        {
            res=c/5;
            c=c%5;
        }
        while(c>=2 && c)
        {
            res+=c/2;
            c=c%2;
        }
        cout << res+c << endl;
    }
    return 0;
}
