#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n, x, total=0;
     cin >> n;
     for(int i=0; i<n; i++)
     {
         cin >> x;
         total+=x;
     }
     if(total%n)
        cout << n-1 << endl;
     else
        cout << n << endl;
     return 0;
}
