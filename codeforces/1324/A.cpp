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
        int a[110], b[110];
        memset(b, 0, sizeof b);
        memset(a, 0, sizeof a);
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
            b[x]++;
        }
        for(int i=0; i<=100; i+=2)
        {
            a[i] = 0;
        }
        int sum = 0;
        for(int i=0; i<=100; i++)
        {
            sum+=a[i];
        }
        if(sum==0)
        {
            cout << "YES" << endl;
            continue;
        }
        for(int i=1; i<=100; i+=2)
        {
            b[i] = 0;
        }
        sum = 0;
        for(int i=0; i<=100; i++)
        {
            sum+=b[i];
        }
        if(sum==0)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
