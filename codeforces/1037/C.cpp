#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int f[n+1];
    f[0]=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i-1]!=b[i-1] && a[i]!=b[i])
            {
                f[i]=1+f[i-1];
                a[i]=a[i-1];
            }
        else if(a[i-1]!=b[i-1])
            f[i]=1+f[i-1];
        else
            f[i]=f[i-1];
    }
    cout << f[n] << endl;
    return 0;
}
