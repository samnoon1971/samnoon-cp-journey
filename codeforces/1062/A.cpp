#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
int a[N];
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            ll x = a[i-1];
            ll y = a[j+1];
            if(i==1)
                x = 0;
            if(j==n)
                y = 1e3+1;
            if(y-x-1 == j-i+1)
            {
               ans = max(ans, j-i+1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
