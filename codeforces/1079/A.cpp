#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 101;
int a[N];
int main()
{
   int n, k;
   cin >> n >> k;
   int m = INT_MIN, cnt = 0;
   for(int i=0; i<n; i++)
   {
       int x;
       cin >> x;
       a[x]++;
   }
   for(int i=1; i<N; i++)
   {
       m = max(m, a[i]);
       if(a[i])
        cnt++;
   }
   cout << ceil((m+.0)/k)*cnt*k-n << endl;
   return 0;
}
