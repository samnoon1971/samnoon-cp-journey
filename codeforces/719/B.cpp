#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int x=0, y=0, a=0, b=0;
    for(int i=0; i<n; i++)
    {
       if(i%2)
       {
           if(s[i]!='b')
            x++;
           else
            y++;
       }
       else
       {
           if(s[i]!='r')
            a++;
           else
            b++;
       }
    }
    cout << min(max(x, a), max(y, b)) << endl;
    return 0;
}
