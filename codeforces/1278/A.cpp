#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int n=a.size(), m=b.size();
        if(n>m)
            cout << "NO" << endl;
        else
        {
            string d=a;
            sort(d.begin(), d.end());
            int flag=0;
            for(int i=0; i<=m-n; i++)
            {
                string c=b.substr(i, n);
                sort(c.begin(), c.end());
                if(c==d)
                {
                    flag++;
                    break;
                }
            }
            if(flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
