#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a[3], n;
        for(int i=0; i<3; i++)
            cin >> a[i];
        cin >> n;
        sort(a, a+3);
        ll sum=a[2]-a[0] + a[2]-a[1];
        if(sum>n)
            cout << "NO" << endl;
        else
        {
            n-=sum;
            if(n%3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}
