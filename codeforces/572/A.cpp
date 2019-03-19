#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int k, m;
    cin >> k >> m;
    vector <int> vx, vy;
    for(int i=0; i<x; i++)
        {
            int p;
            cin >> p;
            vx.push_back(p);
        }
    for(int i=0; i<y; i++)
        {
            int p;
            cin >> p;
            vy.push_back(p);
        }

    int cnt=*(vx.begin()+k-1), sum=0;
    for(auto i:vy)
    {
        if(i>cnt)
            break;
        sum++;
    }
    if(y-sum>=m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
