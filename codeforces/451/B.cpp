#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
    sort(b, b+n);
    int k=1;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            k=0;
            break;
        }
    }
    if(k)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    int x=0;
    while(x<n)
    {
        if(a[x]!=b[x])
            break;
       x++;
    }
    int y=n-1;
    while(y>=0)
    {
        if(a[y]!=b[y])
            break;
       y--;
    }
    k=0;
    reverse(a+x, a+y+1);
    for(int i=0; i<n; i++)
    {
        if(a[i]<k)
        {
            cout << "no" << endl;
            return 0;
        }
        k=a[i];

    }
    cout << "yes" << endl;
    cout << x+1 << " " << y+1 << endl;
    return 0;
}
