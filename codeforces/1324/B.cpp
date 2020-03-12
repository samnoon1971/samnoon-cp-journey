#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+2; j<n; j++)
            {
                if(a[j]==a[i])
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
