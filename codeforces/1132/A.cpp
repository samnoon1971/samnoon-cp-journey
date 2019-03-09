#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a==d)
    {
       if(c && !a)
         cout << 0 << endl;
       else
          cout << 1 << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}
