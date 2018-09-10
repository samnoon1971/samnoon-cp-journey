#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string k=s;
    reverse(k.begin(), k.end());
    int cnt=count(s.begin(), s.end(), s[0]);
    if(cnt==s.size())
        {
            cout << 0 << endl;
            return 0;
        }
    if(k==s)
        cout << s.size()-1 << endl;
    else
        cout << s.size() << endl;
    return 0;
}
