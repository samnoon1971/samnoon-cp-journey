#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    int x=0, w=0;
    sort(s.begin(), s.end());
    for(int i=0; i<n && k; i++)
    {
        if(s[i] > x+1)
        {
            x=s[i];
            w=w+s[i]-96;
            k--;
        }
    }
    if(k)  cout << -1 << endl;
    else cout << w << endl;
    return 0;
}
