#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int lx, rx, ly, ry;
        cin >> lx >> rx >> ly >> ry;
        if(lx!=ry)
            cout << lx << " " << ry << endl;
        else
            cout << rx << " " << ly << endl;
    }
    return 0;
}
