#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[2*n];
        for(int i=0; i<2*n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+2*n);
        cout << abs(a[n]-a[n-1]) << endl;
    }
    return 0;
}
