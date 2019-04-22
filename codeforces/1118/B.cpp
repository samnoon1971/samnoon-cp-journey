#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cx=0, cy=0, bx=0, by=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i%2)
            cx+=a[i];
        else
            cy+=a[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(i%2)
            cx-=a[i];
        else
            cy-=a[i];
        if(cx+by==bx+cy)
            cnt++;
        if(i%2)
            bx+=a[i];
        else
            by+=a[i];
    }
    cout << cnt << endl;
    return 0;
}
