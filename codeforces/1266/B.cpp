#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        if(x%14>=1 && x%14<=6 && x/14)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
