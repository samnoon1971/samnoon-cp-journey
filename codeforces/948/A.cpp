#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char c[501][501];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> c[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int rx[4]={0, 1, 0, -1};
            int cx[4]={1, 0, -1, 0};
            if(c[i][j]=='S')
              for(int x=0; x<4; x++)
                {
                if(c[i+rx[x]][j+cx[x]]=='.')
                    c[i+rx[x]][j+cx[x]]='D';
                else if(c[i+rx[x]][j+cx[x]]=='W')
                {
                cout << "NO" << endl;
                    return 0;
                }
            }
       }
    }
    cout << "YES" << endl;
    for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
              cout << c[i][j];
        cout << endl;
        }
    return 0;
}
