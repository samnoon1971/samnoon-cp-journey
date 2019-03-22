#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int a[n];
   for(int i=0; i<n; i++)
    cin >> a[i];
   multiset <int> ms;
   set <int> s;
   for(int i=0; i<n; i++)
   {
       for(int j=i+1; j<n; j++)
       {
          ms.insert(a[i]+a[j]);
          s.insert(a[i]+a[j]);
       }
   }
   int m=0;
   for(auto i:s)
   {
      if(ms.count(i)>m)
        m=ms.count(i);
   }
   cout << m << endl;
   return 0;
}
