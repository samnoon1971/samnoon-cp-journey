#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll t;
   cin >> t;
   while(t--)
   {
       ll n;
       cin >> n;
       string s;
       if(n==1)
       {
           cout << -1 << endl;
           continue;
       }
       s = '5';
       for(ll i=0; i<n-1; i++)
       {
           s+='3';
       }
       cout << s << endl;
   }
   return 0;
}
