#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if((ax>bx && ax>cx) || (ax<bx && ax<cx))
    {
        if((ay>by && ay>cy)||(ay<by && ay<cy))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
