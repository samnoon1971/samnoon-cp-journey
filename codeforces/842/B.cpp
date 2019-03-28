#include <bits/stdc++.h>
using namespace std;
#define limit 1e-12
int main()
{
    int r, d;
    cin >> r >> d;
    int n, m=0;
    cin >> n;
    while(n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        double c = sqrt(x*x+y*y);
        if(c-limit+z<=r && c+limit>=r-d+z)
            m++;
    }
    cout << m << endl;
    return 0;
}
