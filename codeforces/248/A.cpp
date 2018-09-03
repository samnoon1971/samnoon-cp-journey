#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, l;
    cin >> n;
    int a=0, b=0, sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> l >> r;
        a+=l;
        b+=r;
    }
    if(2*a>n)
        sum+=n-a;
    else
        sum+=a;
    if(2*b>n)
        sum+=n-b;
    else
        sum+=b;
    cout << sum << endl;
    return 0;
}
