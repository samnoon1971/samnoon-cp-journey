#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    double ans = 0;
    for(int i=1; i<=n; i++)
    {
        ans += (1.0/i);
    }
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}
