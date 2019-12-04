#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int a[N], b[N];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        memset(b, 0, sizeof b);
        int m=INT_MAX;
        for(int i=1; i<=n; i++)
        {
         if(b[a[i]])
         {
             m=min(m, i-b[a[i]]+1);
         }
         b[a[i]]=i;
        }
        if(m!=INT_MAX)
            cout << m << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
