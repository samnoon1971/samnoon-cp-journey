#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
      int n;
      cin >> n;
      int even=0, odd=0, sum=0;
      for(int i=0; i<n; i++)
      {
          int x;
          cin >> x;
          sum+=x;
          if(x%2)
            odd++;
          else
            even++;
      }
      if(sum%2)
      {
          cout << "YES" << endl;
      }
      else
      {
          if(odd==0)
          {
              cout << "NO" << endl;
          }
          else
          {
              if(even!=0)
              {
                  cout << "YES" << endl;
              }
              else
              {
                  cout << "NO" << endl;
              }
          }
      }
  }
  return 0;
}
