#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int x=0, y=0;
    int m=a.size(), n=b.size();
    while(m && n)
    {
        if(a[m-1]!=b[n-1])
            break;
        else
        {
            m--;
            n--;
        }
    }
    cout << m+n << endl;
    return 0;
}
