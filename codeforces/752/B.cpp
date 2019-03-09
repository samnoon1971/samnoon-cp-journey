#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    set <pair<char, char> > ms;
    set <char> mms;
    int n=a.size();
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i])
        {
            mms.insert(a[i]);
        continue;
        }
        pair <char, char> mp=make_pair(a[i], b[i]), np, mq=make_pair(b[i], a[i]);
        for(int j=0; j<n; j++)
        {
            np=make_pair(a[j], b[j]);
            if(mp.first==np.first)
            {
                if(mp.second!=np.second)
                {
                    cout << -1 << endl;
                    return 0;
                }

            }
            else if(mp.first==np.second)
            {
                if(mp.second!=np.first)
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
            else if(mp.second==np.second)
            {
                if(mp.first!=np.first)
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
            else if(mp.second==np.first)
            {
                if(mp.first!=np.second)
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
        if(mms.count(mp.first) || mms.count(mp.second))
        {
            cout << -1 << endl;
            return 0;
        }
        if(!ms.count(mq))
           ms.insert(mp);
    }
    if(ms.empty())
        cout << 0 << endl;
    else
    {
        cout << ms.size() << endl;
        for(auto i:ms)
            cout << i.first << " " << i.second << endl;
    }
    return 0;
}
