#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    ll cnt=0, a[n], m=0, sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        cnt=max(cnt, a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==cnt)
            m++;
        else
        {
            sum=max(m, sum);
            m=0;
        }
    }
    cout << max(sum, m) << endl;
    return 0;
}
