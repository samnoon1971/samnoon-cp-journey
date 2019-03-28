#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, a=0, b=0;
    cin >> n;
    ll x, y;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        if(x<0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a<=1 || b<=1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
