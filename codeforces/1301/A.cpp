#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        int n = a.size();
        bool ok = true;
        for(int i=0; i<n; i++)
        {
           if(a[i]==b[i])
           {
               if(a[i]!=c[i])
               {
                   ok = false;
                   break;
               }
           }
           else
           {
               if(c[i]!=b[i] && c[i]!=a[i])
               {
                   ok = false;
                   break;
               }
           }
        }
        if(ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
