#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
     int n;
     cin >> n;
     int a[n];
     int cx=0, cy=0;
     for(int i=0; i<n; i++)
     {
         cin >> a[i];
         if(a[i]==0)
            cx++;
         else
            cy++;
     }
     for(int i=0; i<n; i++)
     {
         if(a[i]==0)
            cx--;
         else
            cy--;
         if(cx==0 || cy==0)
         {
             cout << i+1 << endl;
             return 0;
         }
     }
}
