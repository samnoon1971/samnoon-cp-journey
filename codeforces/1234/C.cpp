#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        string s[2];
        cin >> n >> s[0] >> s[1];
        int cur=0;
        for(int i=0; i<n; i++)
        {
          char c=s[cur][i];
          if(c=='1'||c=='2')
              continue;
          else
          {
              char d=s[(cur+1)%2][i];
              if(d=='1'||d=='2')
              {
                  cur=0;
                  break;
              }
              else
              {
                  cur=(++cur)%2;
              }
          }
        }
        if(cur)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
