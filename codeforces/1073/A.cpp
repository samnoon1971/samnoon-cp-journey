#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    set <char> ms;
    for(int i=0; i<s.size(); i++)
        ms.insert(s[i]);
    if(ms.size()==1)
        cout << "NO" << endl;
    else
        {
            cout << "YES" << endl;
            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i]!=s[i+1])
                {
                    cout << s[i] << s[i+1] << endl;
                    break;
                }
            }
       }
    return 0;
}
