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
    sort(a, a+n);
    int m=0, i=0, j=0;
    while(i<n)
    {
        while(j<n && a[j]-a[i]<=5)
        {
            j++;
            m=max(m, j-i);
        }
        i++;
    }
    cout << m << endl;
    return 0;
}
