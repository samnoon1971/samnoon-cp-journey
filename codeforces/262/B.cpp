#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
    }
    int x=0;
    while(k>0 && x<n)
    {
        if(a[x]<0)
        {
            a[x]=-a[x];
            k--;
        }
        x++;
    }
    if(k%2)
    {
        sort(a, a+n);
        a[0]=-a[0];
    }
    cout << accumulate(a, a+n, 0) << endl;
    return 0;
}
