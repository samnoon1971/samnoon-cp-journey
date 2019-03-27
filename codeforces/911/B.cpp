#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n, a, b;
   cin >> n >> a >> b;
   int m=0;
   for(int i=1; i<n; i++)
   {
       m=max(m, min(a/i, b/(n-i)));
   }
   cout << m << endl;
   return 0;
}
