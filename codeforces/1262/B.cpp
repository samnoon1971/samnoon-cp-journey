#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10;
int a[N], b[N];
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      set <int> ms, mp;
      for(int i=0; i<n; i++)
      {
          cin >> a[i];
      }
      memset(b, 0, sizeof b);
      b[0]=a[0];
      mp.insert(b[0]);
      for(int i=1; i<n; i++)
      {
          if(a[i]!=a[i-1])
            {
                b[i]=a[i];
                mp.insert(a[i]);
            }
      }
      for(int i=1; i<=n; i++)
      {
          ms.insert(i);
      }
      int flag=0;
      for(int i=0; i<n; i++)
      {
          if(b[i])
            ms.erase(b[i]);
          else
            {
                if(*ms.begin()>a[i])
                {
                    flag++;
                    cout << -1 << endl;
                    break;
                }
                b[i]=*ms.begin();
                mp.insert(b[i]);
                ms.erase(b[i]);
            }
      }
      if(flag)
        continue;
      else if(mp.size()!=n)
      {
          cout << -1 << endl;
          continue;
      }
      for(int i=0; i<n; i++)
      {
          cout << b[i] << " ";
      }
      cout << endl;
   }
   return 0;
}
