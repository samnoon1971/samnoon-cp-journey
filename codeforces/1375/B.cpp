#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isOk(ll x, ll y, ll n, ll m)
{
  if(x>=0 && x<n && y>=0 && y<m)
  return true;
  return false;
}
bool isMid(ll x, ll y, ll n, ll m)
{
  if(x>0 && x<n-1 && y>0 && y<m-1)
   return true;
   return false;
}
bool isBorder(ll x, ll y, ll n, ll m)
{
  ll cnt = 0;
  if(isOk(x+1, y+1, n, m))
    cnt++;
    if(isOk(x+1, y-1, n, m))
    cnt++;
    if(isOk(x-1, y+1, n, m))
    cnt++;
    if(isOk(x-1, y-1, n, m))
    cnt++;
  if(cnt == 3)
    return true;
  return false;
}
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n, m;
      cin >> n >> m;
      ll a[n][m];
      for(ll i=0; i<n; i++)
      {
         for(ll j=0; j<m; j++)
         {
            cin >> a[i][j];
         }
      }
      bool pos=true;
      for(ll i=0; i<n; i++)
      {
        for(ll j=0; j<m; j++)
        {
          if(isMid(i, j, n, m))
          {
            if(a[i][j] > 4)
            {
              pos = false;
              break;
            }
            a[i][j] = 4;
          }
          else if((i==0 && j==0) || (i==n-1 && j==m-1) || (i==0 && j==m-1) || (i==n-1 && j==0))
          {
             if(a[i][j] > 2)
             {
               pos = false;
               break;
             }
             a[i][j] = 2;
          }
          else
          {
            //cout << i << " " << j << endl;
             if(a[i][j] > 3)
             {
               pos = false;
               break;
             }
             a[i][j] = 3;
          }
        }
        if(pos==false) break;
      }
      if(pos)
      {
         cout << "YES" << endl;
         for(ll i=0; i<n; i++)
         {
           for(ll j=0; j<m; j++)
           {
             cout << a[i][j] << " ";
           }
           cout << endl;
         }
      }
      else
      {
        cout << "NO" << endl;
      }
   }
}
