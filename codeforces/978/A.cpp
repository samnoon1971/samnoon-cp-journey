#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n;
   cin >> n;
   int a[n];
   set <int> ms;
   stack <int> st;
   for(int i=0; i<n; i++)
   {
       cin >> a[i];
       ms.insert(a[i]);
   }
   for(int i=n-1; i>=0; i--)
   {
       if(ms.find(a[i])!=ms.end())
       {
           st.push(a[i]);
           ms.erase(a[i]);
       }
   }
   cout << st.size() << endl;
   while(!st.empty())
   {
       cout << st.top() << " ";
       st.pop();
   }
   return 0;
}
