#include <bits/stdc++.h>
using namespace std;
int main()
{
    long k, n, w;
    cin >> k >> n >> w;
    long p = k*w*(w+1)/2;
    if(n>p)
        cout << 0 << endl;
    else
        cout << p-n << endl;
    return 0;
}
