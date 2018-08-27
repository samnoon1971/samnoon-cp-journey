#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> a[i][j];
    }
    vector <int> vx, vy;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='B')
            {
                vx.push_back(i);
                vy.push_back(j);

            }
        }
    }
    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());
    int x = vx[vx.size()/2] +1;
    int y = vy[vy.size()/2] + 1;

    cout << x << " " << y << endl;
    return 0;

}
