#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    if(n>26)
    {
        cout << m << endl;
    }
    else
    {
     ll k=1;
    while(n--)
        k*=2;
    cout << m%k << endl;
    }
    return 0;
}
