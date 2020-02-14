#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;

int calc[N][26];

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s, t;
        cin >> s >> t;
        int n = s.size(), m = t.size();
        for(int i=0; i<n+5; i++)
        {
            for(int j=0; j<26; j++)
            {
                calc[i][j] = LONG_MAX;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<26; j++)
            {
                calc[i][j] = calc[i+1][j];
            }
            calc[i][s[i]-'a'] = i;
        }
        ll res = 1, pos = 0;
        for(int i=0; i<m; i++)
        {
            if(pos==n)
            {
                pos = 0;
                res++;
            }
            if(calc[pos][t[i]-'a'] == LONG_MAX)
            {
                pos = 0;
                res++;
            }
            if(calc[pos][t[i]-'a']==LONG_MAX && pos==0)
            {
                res = LONG_MAX;
                break;
            }
            pos = calc[pos][t[i]-'a'] + 1;
        }
        if(res>=LONG_MAX)
            cout << -1 << endl;
        else
            cout << res << endl;
    }
    return 0;
}
