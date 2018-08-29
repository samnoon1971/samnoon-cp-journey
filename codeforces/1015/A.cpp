#include <bits/stdc++.h>

using namespace std;
int main()
{
    set <int> s;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        for(int k=a; k<=b; k++)
            s.insert(k);
    }
    int k = m - s.size();
    cout << k << endl;
    if(k)
    {
        for(int i=1; i<=m; i++)
        {
            if(s.count(i)==0)
            {
                if(k==1)
                    cout << i << endl;
                else cout << i << " ";
                k--;
            }
        }
    }
    return 0;
}
