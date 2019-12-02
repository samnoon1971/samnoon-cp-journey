#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        set <char> ms = {s.begin(), s.end()};
        if(ms.size()!=s.size())
        {
            cout << "No" << endl;
            continue;
        }
        sort(s.begin(), s.end());
        if(s.size()==1)
        {
            cout << "Yes" << endl;
            continue;
        }
        int cx=0, p=s.size();
        for(int i=1; i<p; i++)
        {
            if(s[i]!=s[i-1]+1)
            {
                cx++;
                break;
            }
        }
        if(cx)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
