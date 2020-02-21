#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
int a[3][N];
int main()
{
    int n, q;
    cin >> n >> q;
    int res = 0;
    while(q--)
    {
        int r, c;
        cin >> r >> c;
        int cnt = a[r][c]?-1:1;
        res += cnt*(a[3-r][c-1] + a[3-r][c] + a[3-r][c+1]);
        a[r][c]^=1;
        if(res)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
