#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=0, x;
    multiset <int> ms;
    set <int> s;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        ms.insert(x);
        s.insert(x);
        m=max(m, x);
    }
    for(auto i:s)
    {
        if(!(m%i))
        {
            ms.erase(ms.find(i));
        }
    }
    x=0;
    for(auto i:ms)
    {
        x=max(i, x);
    }
    cout << m << " " << x << endl;
    return 0;
}
