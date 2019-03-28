#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1, a1, c1, h2, a2;
    cin >> h1 >> a1 >> c1 >> h2 >> a2;
    int cnt=0;
    vector <int> v;
    while(h2>0)
    {
        if(h1<a2+1 && h2>a1)
        {
            v.push_back(1);
            h1 = h1-a2+c1;
        }
        else
        {
            v.push_back(0);
            h1 = h1-a2;
            h2=h2-a1;
        }
        cnt++;
    }
    cout << cnt << endl;
    for(auto i:v)
    {
        if(i==1)
            cout << "HEAL" << endl;
        else
            cout << "STRIKE" << endl;
    }
    return 0;
}
