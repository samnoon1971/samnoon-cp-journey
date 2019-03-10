#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m=ceil(n/2.0), sum=0, cnt=0;
    for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x>0)
                sum++;
            else if(x<0)
                cnt++;
        }
    if(sum>=m)
        cout << m << endl;
    else
        {
            if(cnt>=m)
                cout << -1 << endl;
            else
                cout << 0 << endl;
        }
    return 0;
}
