#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        if(n==1)
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag=true;
        for(int i=0; i<n-1; i++)
        {
          int d=max(0, a[i+1]-k);
          if(d<a[i])
          {
              m+=a[i]-d;
          }
          else if(d-a[i]>m)
          {
              flag=false;
              break;
          }
          else
          {
              m-=(d-a[i]);
          }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
