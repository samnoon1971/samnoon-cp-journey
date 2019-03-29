#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    int sum=0;
    for(int i=0; i<x; i++)
    {
        int cnt=count(a, a+n, i);
        if(!cnt)
            sum++;
    }
    if(count(a, a+n, x))
        sum++;
    cout << sum << endl;
    return 0;
}
