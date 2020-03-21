#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5+10;
ll a[N];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y]++;
    }
    ll m = 0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==2)
            {
                cout << "NO" << endl;
                return 0;
            }
    }
    cout << "YES" << endl;
    return 0;
}
