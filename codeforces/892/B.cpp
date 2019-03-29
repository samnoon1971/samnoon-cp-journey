#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    ll cnt=0, m=n;
    for(int i=n-1; i>=0; i--)
    {
        if(i<m)
            cnt++;
        m=min(m, i-a[i]);
    }
    cout << cnt << endl;
    return 0;
}
