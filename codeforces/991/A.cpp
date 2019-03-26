#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int k=n-a-b+c;
    a-=c, b-=c;
    if(k>0 && a>=0 && b>=0)
        cout << k << endl;
    else
        cout << -1 << endl;
    return 0;
}
