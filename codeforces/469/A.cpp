#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, x;
    cin >> a;
    set<int> p;
    for(int i=0; i<a; i++)
    {
        cin >> x;
        p.insert(x);
    }
    cin >> b;
    for(int i=0; i<b; i++)
    {
        cin >> x;
        p.insert(x);
    }
    if(p.size()==n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}
