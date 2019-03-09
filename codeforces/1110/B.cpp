#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    ll  b[n], cnt=a[n-1]-a[0]+1;
    b[0]=0;
    for(int i=1; i<n; i++)
        b[i]=a[i]-a[i-1]-1;
    sort(b, b+n);
    reverse(b, b+n);
    for(int i=0; i<k-1; i++)
        cnt-=b[i];
    cout << cnt << endl;
    return 0;
}
