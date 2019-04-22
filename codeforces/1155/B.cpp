#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cx=0, pos=0;
    int m=(n-11)/2;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='8')
            cx++;
        if(cx==m+1)
            break;
        pos++;
    }
    if(pos>2*m)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        return 0;
    }
}
