#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, sum=0;
        cin >> n >> m;
        vector <int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        if(n==2)
            {
                cout << -1 << endl;
                continue;
            }
        else if(m<n)
            {
                cout << -1 << endl;
                continue;
            }
        cout << 2*sum << endl;
        cout << 1 << " " << n << endl;
        for(int i=1; i<n; i++)
            cout << i << " " << i+1 << endl;
    }
    return 0;
}
