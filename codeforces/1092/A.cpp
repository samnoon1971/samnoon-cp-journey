#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int  n, k;
       cin >> n >> k;
       char c='a';
       for(int i=0; i<n; i++)
           cout << char(c+i%k);
       cout << endl;
   }
   return 0;
}
