#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    unordered_multimap <string, string> mp, mq;
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        mp.insert(make_pair(a, b));
        mq.insert(make_pair(b, a));
    }
    vector <string> vs;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        vs.push_back(a);
    }
    unordered_multimap <string, string> :: iterator it;
    vector <string> :: iterator ip;
    for(ip=vs.begin(); ip!=vs.end(); ip++)
    {
        string c = *ip;
        if(mp.find(c)!=mp.end())
        {
            it=mp.find(c);
            a=(*it).first;
            b=(*it).second;
        }
        if(mq.find(c)!=mq.end())
        {
            it=mq.find(c);
            a=(*it).first;
            b=(*it).second;
        }
        if(a.size()<b.size())
            cout << a << " ";
        else if(b.size()<a.size())
            cout << b << " ";
        else
            cout << a << " ";

    }
    cout << endl;
    return 0;
}
