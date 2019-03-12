#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int g[6][6];
    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6; j++)
        {
            cin >> g[i][j];
        }
    }
    int m[6];
    for(int i=1; i<=6; i++)
        m[i]=i;
    int sum=0, cnt=0;
    do
    {
      int a=m[1], b=m[2], c=m[3], d=m[4], e=m[5];
      cnt=g[b][c]+g[c][b]+g[a][e]+g[e][a]+g[a][c]+g[c][a]+g[d][e]+g[e][d]+g[a][e]+g[e][a]+g[d][e]+g[e][d];
      sum=max(sum,cnt);
    }while(next_permutation(m+1, m+6));
    cout << sum << endl;
    return 0;
}
