#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n][m];
    int mark[m]={0};
    vector <int> v[n];
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        for(int j=0; j<m; j++)
        {
            if(s[j]=='0')
                ar[i][j]=0;
            else
                ar[i][j]=1;
            if(ar[i][j]==1)
            {
                mark[j]++;
                v[i].push_back(j);
            }
        }
    }
    int k=0;
    for(int i=0; i<n; i++)
    {
        for(auto j:v[i])
        {
            if(mark[j]==1)
            {
                k++;
                break;
            }
        }
    }
    if(n-k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
