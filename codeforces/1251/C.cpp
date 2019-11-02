#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, k;
        int n;
        cin >> s;
        n=s.size();
        queue <char> qx, qy;
        for(int i=0; i<n; i++)
        {
            if(s[i]%2)
                qy.push(s[i]);
            else
                qx.push(s[i]);
        }
        while(!qx.empty() && !qy.empty())
        {
            char c=min(qx.front(), qy.front());
            k+=c;
            if(c!=qx.front())
                qy.pop();
            else
                qx.pop();
        }
        while(!qx.empty())
        {
            k+=qx.front();
            qx.pop();
        }
        while(!qy.empty())
        {
            k+=qy.front();
            qy.pop();
        }
        cout << k << endl;
    }
    return 0;
}
