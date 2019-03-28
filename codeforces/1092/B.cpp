#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, x;
   cin >> n;
   int ar[n];
   for(int i=0; i<n; i++)
    cin >> ar[i];
   sort(ar, ar+n);
   int sum=0;
   for(int i=0; i<n-1; i+=2)
   {
       sum+=ar[i+1]-ar[i];
   }
   cout << sum << endl;
   return 0;
}
