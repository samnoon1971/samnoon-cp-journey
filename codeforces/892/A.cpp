#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    ll a[n], b[n], sum=0;
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
    for(int i=0; i<n; i++)
        cin >> b[i];
    sort(b, b+n);
    if(b[n-1]+b[n-2]<sum)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
