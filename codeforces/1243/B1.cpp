#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int k;
  cin >> k;
  while(k--)
  {
      int n;
      string a, b;
      cin >> n >> a >> b;
      set <char> px, py;
      int cnt=0;
      for(int i=0; i<n; i++)
      {
          if(a[i]!=b[i])
          {
              cnt++;
              px.insert(a[i]);
              py.insert(b[i]);
          }
      }
      if(cnt==0)
        cout << "Yes" << endl;
      else if(cnt==2)
      {

          if(px.size()==1&&py.size()==1)
          {
            cout << "Yes" << endl;
          }
          else
          {
              cout << "No" << endl;
          }
      }
      else
      {
          cout << "No" << endl;
      }
  }
  return 0;
}
