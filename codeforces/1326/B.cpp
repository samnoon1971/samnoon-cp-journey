#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    ll b[n];
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    ll a[n];
    ll x = b[0];

    memset(a, 0, sizeof a);
      a[0] = x;
    for(int i=1; i<n; i++)
    {
        a[i] = b[i] + x;
        x = max(x, a[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
