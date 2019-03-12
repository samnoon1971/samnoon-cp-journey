#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll y, k, n;
  cin >> y >> k >> n;
  bool flag=true;
  for(ll i=k; i<=n; i+=k)
  {
      if(i%k || i-y<=0)
        continue;
      cout << i-y << " ";
      flag=false;
  }
  if(flag)
    cout << -1 << endl;
  return 0;
}
