#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
    int cnt=0, sum=0, lb=0, ub=0;
    for(int i=0; i<n; i++)
    {
        if(a[i])
            lb++;
        else
            break;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(a[i])
            ub++;
        else
            break;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            cnt++;
            sum=max(cnt, sum);
        }
        else
        {
            sum=max(cnt, sum);
            cnt=0;
        }
    }
    cout << max(lb+ub, sum) << endl;
    return 0;
}
