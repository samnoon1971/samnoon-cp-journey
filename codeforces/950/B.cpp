#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];
    int x=0, y=0, nsum=a[x], msum=b[y], cnt=0;
    while(x<n || y<m)
    {
        if(nsum==msum)
        {
            cnt++;
            if(x<n && y<m)
            {
                x++;
                y++;
                nsum+=a[x];
                msum+=b[y];
            }
            else
                break;
        }
        else if(nsum>msum)
        {
            if(y<m)
                y++;
            else
                break;
            msum+=b[y];
        }
        else
        {
            if(x<n)
                x++;
            else
                break;
            nsum+=a[x];
        }
    }
    cout << cnt << endl;
    return 0;
}
